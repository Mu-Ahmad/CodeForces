#include <bits/stdc++.h>
#define vi vector<int>
 
using namespace std;
 
vector<vi> grid, marked;
int n, m;
 
void printGrid(){
 for (auto v: grid){
  for (auto x: v)
   printf("%d ", x);
  puts("");
 }
}
 
int isValid(int i, int j){
 // printf("%d %d isValid Check\n", i, j);
 if(i<1 or i>=n) return false;
 if(j<1 or j>=m) return false;
 
  int v = grid[i][j];
  v = max(v, grid[i-1][j]);
  v = max(v, grid[i][j-1]);
  v = max(v, grid[i-1][j-1]);
 
  if (grid[i-1][j] != v and grid[i-1][j]) return false;
  if (grid[i][j] != v and grid[i][j]) return false;
  if (grid[i][j-1] != v and grid[i][j-1]) return false;
  if (grid[i-1][j-1] != v and grid[i-1][j-1]) return false;
 
  // printf("%d\n", v);
  // printf("%d %d\n%d %d\n---\n", grid[i-1][j-1], grid[i-1][j], grid[i][j-1], grid[i][j]);
  
 
 return v;
}
 
 
 
void mark(int i, int j){
 // printf("%d %d\n", i, j);
 marked[i][j] = true;
 grid[i][j] = grid[i-1][j] = grid[i][j-1] = grid[i-1][j-1] = 0;
 // printGrid();
}
 
int main(){
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
 cin >> n >> m;
 
 grid = vector<vi> (n, vi(m));
 marked = vector<vi> (n, vi(m, 0));
 
 for (int i=0; i<n; i++)
  for (int j=0; j<m; j++)
   cin >> grid[i][j];
 
 bool keepGoing = true;
 vector <vi> ans;
 queue <pair <int, int>> Q;
 
 int temp;
 for (int i=1; i<n; i++)
  for (int j=1; j<m; j++)
   if (temp = isValid(i, j)){
    Q.push({i, j});
   }
 
 int i, j;
 while(!Q.empty()){
  tie(i, j) = Q.front(); Q.pop();
  // printf("%d %d isValid Check\n", i, j);
  if(temp = isValid(i, j)){
   ans.push_back({i, j, temp});
   mark(i, j);
   Q.push({i+1, j+1});
   Q.push({i+1, j});
   Q.push({i+1, j-1});
   Q.push({i+1, j-2});
 
   Q.push({i, j+1});
   Q.push({i+1, j+1});
   Q.push({i-1, j+1});
   Q.push({i-2, j+1});
 
   Q.push({i, j-1});
   Q.push({i-1, j-1});
   Q.push({i-1, j});
  }
 
 }
 
 
 bool possible = true;
 for (int i=0; i<n; i++)
  for (int j=0; j<m; j++)
   if (grid[i][j] != 0) possible = false;
 
 printf("%d\n", (possible) ? ans.size() : -1);
 reverse(ans.begin(), ans.end());
 if (possible) 
  for(auto v : ans)
   printf("%d %d %d\n", v[0], v[1], v[2]);
 return 0; 
}
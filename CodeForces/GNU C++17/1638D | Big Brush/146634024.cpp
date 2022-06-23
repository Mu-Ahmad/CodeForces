#include <bits/stdc++.h>
#define vi vector<int>
 
using namespace std;
 
vector<vi> grid;
int n, m;
 
int isValid(int i, int j){
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
 
 return v;
}
 
 
 
void inline mark(int i, int j){
 grid[i][j] = grid[i-1][j] = grid[i][j-1] = grid[i-1][j-1] = 0;
}
 
int main(){
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 cin >> n >> m;
 grid = vector<vi> (n, vi(m));
 
 for (int i=0; i<n; i++)
  for (int j=0; j<m; j++)
   cin >> grid[i][j];
 
 vector <vi> ans;
 queue <pair <int, int>> Q;
 
 for (int i=1; i<n; i++)
  for (int j=1; j<m; j++)
   if (isValid(i, j)) Q.push({i, j});
 
 int i, j, temp;
 while(!Q.empty()){
  tie(i, j) = Q.front(); Q.pop();
 
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
 for (int i=1; i<n; i++)
  for (int j=1; j<m; j++)
   if (grid[i][j] != 0) possible = false;
 
 printf("%d\n", (possible) ? ans.size() : -1);
 
 if (possible) {
  reverse(ans.begin(), ans.end());
  for(auto v : ans)
   printf("%d %d %d\n", v[0], v[1], v[2]);
 }
 return 0; 
}
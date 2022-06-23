#include <bits/stdc++.h>
#define vi vector <int>
 
using namespace std;
 
vector <vi> adj_list;
vi cord;
vector <bool> visited, oirentation;
 
void dfs(int curr){
 visited[curr] = true;
 
 for (auto nxt : adj_list[curr])
  if (!visited[nxt]){
   oirentation[nxt] = 1 ^ oirentation[curr];
   dfs(nxt);
  } 
 return;
}
 
bool topological_sort(int n){
 vi in(n+1, 0);
 in[0] = -1;
 
 for (int i=1; i<=n; i++) for(auto u : adj_list[i]){
  in[u]++;
  // printf("%d --> %d \n", i, u);
 }
 
 queue <int> q;
 for (int i=1; i<=n; i++) if (in[i] == 0) 
  q.push(i);
 
 int cordinate = 0;
 while(q.empty() == false){
  int v = q.front(); q.pop();
  // printf("%d\n", v);
  cord[v] = cordinate++;
  for(auto u : adj_list[v]){
   in[u]--;
   if (in[u] == 0) q.push(u);
  }
 
 }
 // printf("%d\n", cordinate);
 return cordinate == n; 
}
 
int main(){
 int n, c; cin >> n >> c;
 adj_list = vector <vi> (n+1);
 visited = vector <bool> (n+1, false);
 oirentation = vector <bool> (n+1, false);
 cord = vi(n+1);
 
 int t, a, b;
 vector <vi> edge_list;
 while(c--){
  cin >> t >> a >> b;
  adj_list[a].push_back(b), adj_list[b].push_back(a);
  edge_list.push_back({t, a, b});
 }
 
 for (int i=1; i<=n; i++) if(!visited[i]) 
   oirentation[i] = 1, dfs(i);
 
 adj_list = vector <vi> (n+1);
 for (auto v : edge_list){
  if (oirentation[v[1]] == oirentation[v[2]]){
   puts("NO"); return 0;
  }
 
  int r = (oirentation[v[1]]) ? v[1] : v[2]; 
  int l = (oirentation[v[1]]) ? v[2] : v[1]; 
 
  if (v[0] == 1) { //irrelevant
   adj_list[l].push_back(r);
  } else { //destined
   adj_list[r].push_back(l);
  }
 }
 
 
 if (!topological_sort(n))
  puts("NO");
 else{
  puts("YES");
  for(int i=1; i<=n; i++)
   printf("%c %d\n", (oirentation[i]) ? 'R' : 'L', cord[i]);
 }
}
 
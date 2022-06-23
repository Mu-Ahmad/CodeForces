#include <bits/stdc++.h>
 
using namespace std;
 
int n;
vector <vector<int>> adj_list;
 
void dfs(bool* visited, int curr) {
  visited[curr]=true;
  // Process the current node
  // cout << curr << ' ';
 
  for(auto neighbour : adj_list[curr])
   if(visited[neighbour] == false)
    dfs(visited, neighbour);
 
  return;
}
 
int main(){
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int t; cin >> t;
 
 while(t--){
  cin >> n;
  int arr[n];
  for (int i=0; i<n; i++) cin >> arr[i], arr[i]--;
 
  vector<int> s;
 
 
  for (int i=0; i<n; i++){
   auto it = lower_bound(s.begin(), s.end(),arr[i]);
   if (it == s.end()) s.push_back(arr[i]);
   else {
    auto it1 = s.end() - 1;
    *it = *it1;
    s.resize(it - s.begin() + 1);
   }
  }
  
 
  printf("%d\n", s.size());
 }
 
 
 return 0; 
}
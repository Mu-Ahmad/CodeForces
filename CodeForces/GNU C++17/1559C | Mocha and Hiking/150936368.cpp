#include <bits/stdc++.h>
 
using namespace std;
 
void stale_flippant() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
vector<int> dfs(vector< vector<int> >& adj_list, vector<bool>& visited, vector<int>& ans, int curr)
{
 visited[curr] = true;
 // cout << curr << ' ';
 ans.push_back(curr);
 
 for (auto u : adj_list[curr]) {
  // cout << u << '\n';
  if (visited[u] == false) dfs(adj_list, visited, ans, u);
 }
 
 return ans;
}
 
int main()
{
 stale_flippant();
 int t; cin >> t;
 // cout << "Hello\n";
 while (t--)
 {
  int n, temp; cin >> n;
  vector<int> arr(n);
 
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
 
  if (arr[0])
  {
   cout << n + 1 << ' ';
   for (int i = 1; i <= n; i++) cout << i << ' ';
   // cout << 'g';
   cout << '\n';
   continue;
  }
 
  bool found = false;
  for (int i = 1; i < n; i++) if (!arr[i - 1] and arr[i])
   {
    for (int j = 0; j < i; j++) cout << j + 1 << ' ';
    cout << n + 1 << ' ';
    for (int j = i; j < n; j++) cout << j + 1 << ' ';
    cout << '\n';
    // cout << "Breaking\n";
    found = true;
    break;
   }
 
  if (!found)
  {
   for (int i = 1; i <= n; i++) cout << i << ' ';
   cout << n + 1 << '\n';
  }
 
 
 }
 return 0;
}
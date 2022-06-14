#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
 
#define pii pair<int, int>
 
using namespace std;
 
int main() {
 int t; cin >> t;
 while(t--)
 {
  int n, m, x; 
  cin >> n >> m >> x;
  vector<pii> arr(n);
  for(int i=0; i<n; i++) {
   cin >> arr[i].first;
   arr[i].second = i;
  }
  sort(arr.begin(), arr.end(), greater<pii>());
  
  priority_queue <pii, vector<pii>, greater<pii>> pq;
  
  while(m--) pq.push({0, m+1});
  vector<int> ans(n);
  for (auto& num : arr)
  {
   auto top = pq.top(); pq.pop();
   top.first += num.first;
   ans[num.second] = top.second;
   pq.push(top);
  }
  
  int smallest = pq.top().first;
  
  while(pq.size()>1) pq.pop();
  
  int greatest = pq.top().first;
  
  
  if (greatest - smallest > x) cout << "NO\n";
  else 
  {
   cout << "YES\n";
   for (auto& num : ans) cout << num << ' ';
  }
  cout << '\n';
  
 }
 return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
void stale_flippant() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
 
int main()
{
 stale_flippant();
 int t; cin >> t;
 while (t--)
 {
  int n, temp; cin >> n;
 
  vector<int> arr(n);
  map<int, int> freq;
  for (int i = 0; i < n; ++i)
  {
   cin >> arr[i];
   freq[arr[i]]++;
  }
 
  priority_queue<int> q;
  for (auto& p : freq)
  {
   q.push(p.second);
  }
 
  while (q.size() > 1)
  {
   int a = q.top(); q.pop();
   int b = q.top(); q.pop();
 
   a--, b--;
   n -= 2;
   if (a) q.push(a);
   if (b) q.push(b);
  }
 
  cout << n << '\n';
 }
 return 0;
}
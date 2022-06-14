#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
void stale_flippant() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
int main() {
 stale_flippant();
 int t; cin >> t;
 
 while (t--)
 {
  int n; cin >> n;
 
  vector<int> arr(n);
  vector<vector<int>> pos(n + 1);
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
   pos[arr[i]].push_back(i);
  }
 
  vector <int> ans;
  int l = 0;
  while (l < n)
  {
   int r = l, mex = 0;
   for (; mex <= n + 1; mex++)
   {
    auto itr = lower_bound(pos[mex].begin(), pos[mex].end(), l);
    if (itr == pos[mex].end()) break;
    r = max(r, *itr);
   }
   ans.push_back(mex);
   l = r + 1;
  }
 
  cout << ans.size() << '\n';
  for (auto a : ans) cout << a << ' ';
  cout << '\n';
 }
 
 return 0;
}
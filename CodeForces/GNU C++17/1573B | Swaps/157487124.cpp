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
 
  vector <int> a(n), b(n), d(2 * n + 10, -1);
 
  for (auto& x : a) cin >> x;
  for (auto& x : b) cin >> x;
 
 
  for (int i = 0; i < n; i++)
  {
   for (int j = a[i]; j <= 2 * n; j++)
   {
    if (d[j] != -1) break;
    else d[j] = i;
 
    // deb3(a[i], i, j);
   }
  }
 
  long long ans = INT_MAX;
 
  for (int i = 0; i < n; i++)
  {
   ans = min(ans,  (long long)i + d[b[i]]);
  }
 
  cout << ans << '\n';
 }
 
 return 0;
}
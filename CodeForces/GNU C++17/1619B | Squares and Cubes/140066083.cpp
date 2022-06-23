#include <bits/stdc++.h>
 
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
 
 while (t--) {
  double num; cin >> num;
  double ans = floor(cbrt(num));
  ans += floor(sqrt(num));
 
  cout << ans - floor(sqrt(cbrt(num))) << '\n';
 }
 
 return 0;
}
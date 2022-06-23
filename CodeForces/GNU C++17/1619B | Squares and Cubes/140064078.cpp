#include <bits/stdc++.h>
 
using namespace std;
 
void stale_flippant() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
int arr[1000005];
 
int SquareCube(long long N) {
 
 int cnt = 0, i = 1;
 
 while (int(pow(i, 6)) <= N) {
  ++cnt;
  ++i;
 }
 
 return cnt;
}
 
int main() {
 stale_flippant();
 
 int t; cin >> t;
 
 while (t--) {
  double num; cin >> num;
  double ans = floor(cbrt(num));
  ans += floor(sqrt(num));
 
  cout << ans - floor(SquareCube(num)) << '\n';
 }
 
 return 0;
}
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
 int t;  cin >> t;
 while (t--)
 {
  string str; cin >> str;
  int n = str.size();
  int done_ones[n + 1] = {0}, _done_ones[n + 1] = {0}, done_zeroes[n + 1] = {0}, _done_zeroes[n + 1] = {0};
 
 
  done_ones[0] = (str[0] == '0');
  done_zeroes[0] = (str[0] == '1');
  for (int i = 1; i < n; i++)
  {
   done_ones[i] = done_ones[i - 1] + (str[i] == '0');
   done_zeroes[i] = done_zeroes[i - 1] + (str[i] == '1');
  }
 
  _done_ones[n - 1] = (str[n - 1] == '0');
  _done_zeroes[n - 1] = (str[n - 1] == '1');
  for (int i = n - 2; i >= 0; i--)
  {
   _done_ones[i] = _done_ones[i + 1] + (str[i] == '0');
   _done_zeroes[i] = _done_zeroes[i + 1] + (str[i] == '1');
  }
 
  int ans = n;
 
  for (int i = 0; i < n; i++)
  {
   ans = min({ans, done_ones[i] + _done_zeroes[i + 1], done_zeroes[i] + _done_ones[i + 1]});
   // deb3(done_ones[i], done_zeroes[i], ans);
  }
 
  cout << ans << '\n';
 }
 
 return 0;
}
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
  int n; cin >> n;
  string str; cin >> str;
 
  n = count(str.begin(), str.end(), '*');
  int _m, m;
  _m = m = ceil(n / 2.0);
  int idx;
  long long ans = 0;
  for (int i = 0; i < str.size() and m; i++)
  {
   if (str[i] == '*')
   {
    m--;
    idx = i;
   }
  }
 
  int c = idx - _m;
  for (int i = 0; i < str.size(); i++)
  {
   if (str[i] == '*')
   { c++;
    ans = ans + abs(i - c);
   }
  }
  cout << ans << '\n';
 }
 return 0;
}
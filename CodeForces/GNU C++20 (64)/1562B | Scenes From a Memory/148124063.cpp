#include <bits/stdc++.h>
 
using namespace std;
 
bool isPrime[100] = {0};
 
void solve()
{ int n; cin >> n;
 string str; cin >> str;
 for (auto ch : str)
 {
  int num = ch - '0';
  if (num == 1 or
          num == 4 or
          num == 6 or
          num == 8 or
          num == 9)
  {
   cout << "1\n" << num << '\n';
   return;
  }
 }
 
 for (int i = 0; i < str.length(); i++)
  for (int j = i + 1; j < str.length(); j++)
   if (!isPrime[(str[i] - '0') * 10 + (str[j] - '0')])
   {
    cout << "2\n" << str[i] << str[j] << '\n';
    return;
   }
}
 
 
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
 for (int i = 2; i < 100; i++)
 {
  isPrime[i] = true;
  for (int j = 2; j * j <= i; j++)
   if (i % j == 0) {
    // cout << i << " is not prime\n";
    isPrime[i] = false;
   }
 }
 
 int t; cin >> t;
 while (t--) solve();
 return 0;
}
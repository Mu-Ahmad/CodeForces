#include <bits/stdc++.h>
 
using namespace std;
 
void stale_flippant() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
void solve(string str)
{
 vector <string> targets = {"aa", "aba", "aca", "abca", "acba", "abbacca", "accabba"};
 for (auto s : targets)
 {
  if (str.find(s) != string::npos)
  {
   cout << s.size() << '\n';
   return;
  }
 }
 
 cout << "-1\n";
 return;
}
 
int main()
{
 stale_flippant();
 int t; cin >> t;
 while (t--)
 {
  int n; cin >> n;
  string str; cin >> str;
  solve(str);
 }
 return 0;
}
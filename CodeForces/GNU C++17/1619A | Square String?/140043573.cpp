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
 string line;
 while (t--) {
  bool ans = false;
  cin >> line;
  // cout << line << '\n';
  if (line.size() % 2 == 1) {
   cout << "NO\n";
   ans = true;
  }
 
  if (!ans)
   for (int i = 0, j = line.size() / 2; j < line.size(); i++, j++)
    if (line[i] != line[j]) {
     cout << "NO\n";
     ans = true;
     break;
    }
 
  if (!ans)
   cout << "Yes\n";
 }
 
 return 0;
}
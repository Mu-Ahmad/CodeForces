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
 
int n;
 
int main() {
 stale_flippant();
 int t; cin >> t;
 
 while (t--)
 {
  int n; cin >> n;
 
  vector<int> arr(n + 1, 0);
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
 
  int top = arr[0];
  int ans = 0;
  for (int i = 1; i < n; i++)
  {
   if (arr[i] < top)
   {
    ans++;
    top = arr[i + 1];
    i++;
   }
   else top = max(top, arr[i]);
  }
 
  cout << ans << '\n';
 }
 
 return 0;
}
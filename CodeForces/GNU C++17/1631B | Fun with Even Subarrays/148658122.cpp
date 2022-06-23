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
 int t, temp; cin >> t;
 while (t--)
 {
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
 
  reverse(arr, arr + n);
 
  int ans = 0, x = 1;
  while (x < n)
  {
   if (arr[x] != arr[0])
   {
    ans++;
    x += x;
   } else
   {
    x++;
   }
  }
 
  cout << ans << '\n';
 }
 return 0;
}
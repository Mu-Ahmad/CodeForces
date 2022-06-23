#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
void stale_flippant() 
{
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
    while(t--)
    {
      int n; cin >> n;
      long long arr[n]; 
      for (int i=0; i<n; i++) cin >> arr[i];
      long long g[2] = {arr[0], arr[1]};
 
      for (int i=0; i<n; i++)
        g[i&1] = __gcd(g[i&1], arr[i]);
 
      bool good[2] = {1, 1};
 
      for (int i=0; i<n; i++)
        good[i&1] = good[i&1] and (arr[i] % g[(i&1) ^ 1]);
 
      long long ans = 0LL;
 
      if (good[0]) ans = g[1];
      if (good[1]) ans = max(ans, g[0]);
 
      cout << ans << '\n';
    }
    
    return 0;
}
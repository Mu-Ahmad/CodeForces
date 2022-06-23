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
      string s; cin >> s;
      string ans = "";
      ans += s[0];
      for (int i = 1; i<n; i++)
        if (s[i] < s[i-1]) ans += s[i];
        else if (s[i] == s[i-1] and i > 1) ans += s[i];
        else break;
 
     cout << ans;
     reverse(ans.begin(), ans.end());
     cout << ans << '\n';
    }
    
    return 0;
}
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
 
    ll fact[17];
    fact[0] = fact[1] = 1;
 
    for (int i=2; i<17; i++)
        fact[i] = fact[i-1] * i;
    
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        int ans = __builtin_popcountll(n);
        for (int i=0; i<(1<<16); i++)
        {
            ll factorialSum = 0;
 
            for (int p = 0; p <16; p++)
                if ((1 << p) & i) factorialSum += fact[p];
 
            if (n - factorialSum >= 0)
            {
                ll remain = n - factorialSum;
                if ((remain&1) and (i&1)) continue;
                if ((remain&2) and (i&2)) continue;
 
                ans = min(ans, __builtin_popcountll(remain) + __builtin_popcount(i));
            }
        }
 
        cout << ans << '\n';
    }
    return 0;
}
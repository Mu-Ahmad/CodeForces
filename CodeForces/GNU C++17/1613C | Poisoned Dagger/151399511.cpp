#include <bits/stdc++.h>
#define mod 1000000007
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
        ll n, h; cin >> n >> h;
        vector<ll> times(n);
        for (int i=0; i<n; i++) cin >> times [i];
 
        ll l = 1, r = 1e18;
 
        while(l<=r)
        {
            ll m = (l + r) / 2;
 
            ll sum = m;
            for (int i=0; i<n-1; i++) sum += min(m, times[i+1] - times[i]);
        
            if (sum >= h) r = m-1;
            else l = m+1;
        }
 
        cout << l << '\n';
 
    }
    return 0;
}
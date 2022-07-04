#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
#define ll long long
#define vll vector<ll>
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
#define fi first 
#define se second 
const int MOD = 998244353;
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
 
    while(t--)
    {
        int n; cin >> n;
        vll arr(n);
 
        for(int i=0; i<n; i++) cin >> arr[i];
 
        ll m = *max_element(arr.begin(), arr.end());
 
        ll x = count(arr.begin(), arr.end(), m);
        ll k = count(arr.begin(), arr.end(), m - 1);
 
        ll ans = 1, inValid = 1;
        for (ll i=1; i<=n; ++i)
        {
            (ans *= i) %= MOD;
            if (i != k+1) (inValid *= i) %= MOD;;
        }
        if (x > 1) cout << ans << '\n';
        else    cout << (ans - inValid + MOD) % MOD << '\n';
    }
 
    return 0;
}
 
 
 
 
 
 
 
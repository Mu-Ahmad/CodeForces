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
constexpr int MOD = (1e9) + 7;
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
 
    while(t--)
    {
        ll n; cin >> n;
 
        ll k = 2, c = 2;
        ll ans = 0;
        ll already = 0;
        while (already < n)
        {
            ll curr = n - n / c - already;
            already += curr;
            (ans += (curr * k) % MOD) %= MOD;
 
            do {
                k++;
            } while (__gcd(c, k) == k);
            c *= k / __gcd(c, k);
        }
 
        cout << ans << '\n';
 
    }
 
    return 0;
}
 
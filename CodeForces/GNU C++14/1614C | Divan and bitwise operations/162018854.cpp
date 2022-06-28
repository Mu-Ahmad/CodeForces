#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
 
#define ll long long
#define vi vector<ll>
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
#define MOD (ll)(1e9+7)
 
ll my_pow(ll n, ll p)
{   
    // base case
    if (p == 0) return 1LL;
    if (p == 1) return n; 
 
    // recursive case
    return (n * my_pow(n, p-1) % MOD) % MOD;
}
 
ll n;
 
int main()
{   
    stale_flippant();
    int t; cin >> t;
    while(t--)
    {
        int n, m, a, b, c;
        cin >> n >> m;
 
        long long x = 0ll;
        while(m--)
        {
            cin >> a >> b >> c;
            x |= c;
        }
        cout << ((x*my_pow(2ll, n-1)) % MOD) << '\n';
    }
 
    return 0;
}
 
 
 
 
 
 
 
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
int main()
{
    int t; cin >> t;
    string s1, s2;
    while (t--)
    {
        ll n, x, t;
        cin >> n >> x >> t;
 
        ll p = min(t/x, n);
        ll ans = p * (p-1) / 2 + p*(n-p);
 
        cout << ans << '\n';
    }
    return 0;
}
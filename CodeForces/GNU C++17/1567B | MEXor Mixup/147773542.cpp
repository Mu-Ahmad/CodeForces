#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    string s1, s2;
    int xxrr[300005] = {0};
    int x = 0;
    for (int i=0; i<300005; i++) {
        x ^= i;
        xxrr[i] = x;
    }
    while (t--)
    {
        int mx, xr; cin >> mx >> xr;
 
        x = xxrr[mx - 1];
 
        // cout << x << ' ' << (x ^ mx) << ' ';
        if (x == xr) cout << mx << '\n';
        else if ((x ^ mx) == xr)  cout << mx + 2 << '\n';
        else cout << mx + 1 << '\n';
    }
    return 0;
}
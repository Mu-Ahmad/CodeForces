#include <bits/stdc++.h>
 
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
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
 
    int t; cin >> t;
 
    while(t--)
    {
        int l, r; cin >> l >> r;
 
        long long ans = 0;
        while(l or r)
        {
            ans += r - l;
 
            r /= 10;
            l /= 10;
        }
 
        cout << ans << "\n";
    }
 
}
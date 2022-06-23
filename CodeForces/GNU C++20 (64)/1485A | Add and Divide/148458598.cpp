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
        int a, b;
        cin >> a >> b;
        int ans = INT_MAX;
 
        int _b = b;
 
        do {
            if (_b == 1) _b++;
            int _a = a, x = _b - b;
 
            while(_a) x++, _a/=_b;
 
            ans = min(ans, x);
 
        } while (++_b<10);
 
        cout << ans << '\n';
    }
    
    return 0;
}
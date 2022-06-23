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
 
    int t ; cin >> t;
 
 
    while(t--)
    {   
        long long n, k; cin >> n >> k;
        long long curr = 1, ans = 0;
        while(curr < k)
        {
            curr*=2;
            ans++;
        }
        // cout << curr << ' ' << ans << '\n';
        if (curr >= n) cout << ans << '\n';
        else cout << (long long)(ans + ceil((n-curr)/(double)k)) << '\n';
    }
    
    return 0;
}
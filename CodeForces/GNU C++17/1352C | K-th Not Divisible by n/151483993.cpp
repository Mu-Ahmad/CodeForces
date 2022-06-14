#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define maxSize 3000005
 
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
    int count1, count0;
 
    while(t--)
    {
        int n; int k;
        cin >> n >> k;
        ll ans = k;
        while (k >= n) 
        {
            // cout << k << ' ';
            ans += k / n;
            k = k/n + k%n;
        }
 
        // ans += k;
 
        cout << ans << '\n';
    }
    return 0;
}
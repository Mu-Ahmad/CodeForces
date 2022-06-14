#include<bits/stdc++.h>
#define mod 32768
using namespace std;
 
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
vector<long long> dp(1000000, -1);
 
int main() {
    stale_flippant();
    int t, n; cin >> t;
    for(long long i = 2; i<mod; i++)
    {
        long long _n = i;
        int step = 0;
        while(_n % mod)
        {
            _n*=2;
            step++;
        }
 
        dp[i] = step;
        // cout << i << ':' << dp[i] << '\n';
    }
    dp[1] = 15;
 
    dp[0] = dp[mod] = 0;
    for (long long i=1;i<25; i++)
        dp[mod-i] = min(i, dp[i]); 
    while(t--)
    {
        cin >> n;
        long long ans = dp[n];
        for (int i=1; i<25 and i+n < mod; i++)
            ans = min(ans, dp[i+n]+i);
        cout << ans << ' ';
    }
 
    
}
 
 
 
 
 
 
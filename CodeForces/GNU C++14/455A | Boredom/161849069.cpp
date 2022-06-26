#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vi vector<long long>
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int solve(string& str, int i, int j)
{   
    int len = 0;
 
    for (auto num : str) if (num - '0' == i)
        len++, swap(i, j);
 
    if (i != j and len & 1) len--;
 
    return len;
}
 
int main()
{   
    stale_flippant();
    long long n, c; cin >> n;
    vi arr(1e5 + 5, 0), dp(1e5 + 5, 0);
 
    for (long long i=0; i<n; i++) 
    {
        cin >> c;
        arr[c] += c;
    }
 
    dp[1] = arr[1];
    dp[2] = max(dp[1], arr[2]);
 
    for (long long i=3; i<1e5+3; i++)
        dp[i] = max(dp[i-1], dp[i-2] + arr[i]);
 
    cout << dp[1e5] << '\n';
 
    return 0;
}
 
 
 
 
 
 
 
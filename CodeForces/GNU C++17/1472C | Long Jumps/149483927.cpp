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
        int n; cin >> n;
        int arr[n]; 
        vector<int> dp(n, 0);
        for (int i=0; i<n; i++) cin >> arr[i];
        for (int i=0; i<n; i++)
        {
            dp[i]+=arr[i];
            int idx = i + arr[i];
            if (idx<n) dp[idx] = max(dp[idx], dp[i]);
        }
 
        cout << *max_element(dp.begin(), dp.end()) << '\n';
    }
    
    return 0;
}
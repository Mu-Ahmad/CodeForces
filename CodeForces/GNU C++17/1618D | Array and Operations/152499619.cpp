#include <bits/stdc++.h>
#define pii pair<int, int>
 
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
        int n, k; cin >> n >> k;
        vector<int> arr(n);
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        } 
 
        sort(arr.begin(), arr.end());
 
        int left = max(0, n - (2 * k));
 
        int ans = accumulate(arr.begin(), arr.begin()+left, 0);
 
        int _k = k;
        for (int i = n-1; i-k>=0 and _k--; i--)
        {   
            // cout << arr[i-k] << ' ' << arr[i] << '\n';
            ans += arr[i-k]/arr[i];
        }
        cout << ans << '\n';
    }
    return 0;
}
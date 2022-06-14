#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pii>
 
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
        for(auto& c : arr) cin >> c;
 
        ll total = 0;
        ll ans = 0;
        for (int i=1; i<n; i++) 
        {
            total += arr[i-1];
            double factor = arr[i] / total;
            ans = max(ans, (100ll * arr[i] - k * total + k - 1) / k);
        }
 
        cout << ans << '\n';
    }
    
    return 0;
}
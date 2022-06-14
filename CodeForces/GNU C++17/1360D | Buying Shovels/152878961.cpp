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
        int ans = n;
 
        for (int i = 1; i<=k and i*i<=n; i++)
            if (n % i == 0) {
                ans = min(ans, n / i);
                if (n / i <= k)
                    ans = min(ans, i);
            }
 
 
        cout << ans << '\n';
    }
 
    return 0;
}
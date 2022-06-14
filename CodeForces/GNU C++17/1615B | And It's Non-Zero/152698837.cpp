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
 
    vector <vi> bits(200006, vi(33, 0));
    for (int i = 1; i<200006; i++){
        bits[i] = bits[i-1];
        for (int j=0; j<=33; j++)
                if (!(i & (1<<j))){
                    bits[i][j]++;
                } 
        }
    int t; cin >> t;
    while(t--)
    {
        int l, r; cin >> l >> r;
 
        int k = __lg(r);
        int ans = INT_MAX;
 
        for (int i=0; i <=k; i++){
            // cout << bits[l][i] << ' ' << bits[r][i] << ' ' << i << '\n';
            ans = min(ans, bits[r][i] - bits[l-1][i]);
        }
 
        cout << ans << '\n';
    }
    return 0;
}
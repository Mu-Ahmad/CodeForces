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
        int n, m; cin >> n >> m;
        vector<int> ans;
        for (int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
            {
                int d1 = (i-1) + (j-1);
                d1 = max(d1, (i-1) + abs(j-m));
                d1 = max(d1, (j-1) + abs(i-n));
                d1 = max(d1, abs(i-n) + abs(j-m));
 
                ans.push_back(d1);
            }
 
        sort(ans.begin(), ans.end());
        for(auto& x : ans)
            cout << x << ' ';
        cout << '\n';
 
    }
    return 0;
}
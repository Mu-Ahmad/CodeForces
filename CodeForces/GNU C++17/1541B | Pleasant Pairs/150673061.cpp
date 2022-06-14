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
        int n, temp; cin >> n;
        vector <pair<ll ,int>> arr;
        for (int i=0; i<n; i++) {
            cin >> temp;
            arr.push_back({temp, i+1});
        }
 
        sort(arr.begin(), arr.end());
 
        int res = 0;
        for (int i=0; i<n; i++)
            for (int j=i+1; j<n; j++)
            {
                ll x = arr[i].first * arr[j].first;
                ll v = arr[i].second + arr[j].second;
                // cout << x << ' ' << v << '\n';
 
                if (x == v) res++;
 
                if (x>2*n) break;
            }
 
        cout << res << '\n';
        
    }
    return 0;
}
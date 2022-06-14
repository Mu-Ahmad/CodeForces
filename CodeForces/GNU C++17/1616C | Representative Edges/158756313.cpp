#include <bits/stdc++.h>
 
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
#define pi pair<int, int>
#define pii pair<int, pi>
#define fi first
#define se second
 
 
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
        int n; cin >> n;
        vector<int> arr(n);
 
        for (int i=0; i<n; i++) cin >> arr[i];
 
        int ans = 0;
 
        for (int i=0; i<n-1; i++)
        {
            map<double, int> count;
            for(int j = i+1; j<n; j++)
                count[(double)(arr[j]-arr[i]) / (double)(j-i)]++;
 
            for(auto p : count)
                ans = max(ans, p.second);
        }
 
        cout << n - ans - 1 << '\n';
    }
}
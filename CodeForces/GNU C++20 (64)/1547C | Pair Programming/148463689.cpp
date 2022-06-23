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
int fileSize, n, m;
 
void solve(int* a, int* b)
{   
    vector<int> ans;
 
    int it1 = 0, it2 = 0;
    while (ans.size() < n+m)
    {
        if (a[it1] < b[it2])
        {
            if (a[it1] == 0) fileSize++;
            if (a[it1] > fileSize) 
            {
                cout << "-1\n";
                return;
            }
            ans.push_back(a[it1++]);
        } else 
        {
            if (b[it2] == 0) fileSize++;
            if (b[it2] > fileSize) 
            {
                cout << "-1\n";
                return;
            }
            ans.push_back(b[it2++]);
        }
    }
 
    for (auto num : ans)
    {
        cout << num << ' ';
    }
 
    cout << '\n';
 
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {
       
       cin >> fileSize >> n >> m;
 
       int a[n+1], b[m+1];
       a[n] = b[m] = INT_MAX;
       for (int i=0; i<n; i++) cin >> a[i];
       for (int i=0; i<m; i++) cin >> b[i];
       solve(a, b);
        
    }
    
    return 0;
}
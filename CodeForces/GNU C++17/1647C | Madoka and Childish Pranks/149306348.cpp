#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
 
using namespace std;
 
 
void stale_flippant() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
string solve(int n)
{
    if (n == 1) return "1";
    if (n == 2) return "2";
    if (n == 3) return "21";
    if (n == 4) return "121";
 
    int k = n/2;
    return solve(n-k) + solve(k);
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
 
        bool grid[n][m];
        char ch;
        for (int i=0; i<n; i++)
            for (int j =0; j<m; j++){
                cin >> ch;
                grid[i][j] = ch == '1';
            }
 
        if (grid[0][0]) 
            cout << "-1\n";
        else
        {   vector <pair<pii, pii>> ans;
            for (int i=n-1; i>=0; i--)
                for (int j =m-1; j>=0; j--)
                    if (grid[i][j]) {
                        // cout << i+1 << ' ' << j+1 << '\n';
                        if (j) ans.push_back({{i, j-1}, {i, j}});
                        else if (i) ans.push_back({{i-1, j}, {i, j}});
                    }
 
            cout << ans.size() << '\n';
            for (auto p : ans)
                cout << p.first.first + 1 <<  ' '
                     << p.first.second + 1 <<  ' '
                     << p.second.first + 1 <<  ' '
                     << p.second.second + 1<<  '\n';
        }
    }
 
 
    
    return 0;
}
#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
#define ll long long
#define vi vector<ll>
 
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
        int n; string str;
        cin >> n >> str;
        vector<vi> grid;
        set<int> zeros, ones;
        for (int i=0; i<n; i++)
        {
            if (str[i] == '1')
            {
                if (zeros.size())
                {
                    grid[*zeros.begin()].push_back(i);
                    ones.insert(*zeros.begin());
                    zeros.erase(zeros.begin());
                }
                else
                {
                    ones.insert(grid.size());
                    grid.push_back({i});
                }
            } else
            {
                if (ones.size())
                {
                    grid[*ones.begin()].push_back(i);
                    zeros.insert(*ones.begin());
                    ones.erase(ones.begin());
                }
                else
                {
                    zeros.insert(grid.size());
                    grid.push_back({i});
                }
            }
        }
 
        vi ans(n);
        for (int i=0; i<grid.size(); i++)
        {
            for (auto x:grid[i])
                ans[x] = i+1;
        }
 
        cout << grid.size() << '\n';
        for (int i=0; i<n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
 
    return 0;
}
 
 
 
 
 
 
 
#include <bits/stdc++.h>
 
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
vector <vector<int>> grid;
 
bool superior(int l, int r)
{   
    int count = 0;
 
    for (int i = 0; i<5; i++)
        if (grid[l][i] < grid[r][i]) count++;
 
    return count >= 3;
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
 
    while(t--)
    {
        int n; cin >> n;
        grid = vector<vector<int>>(n, vector<int>(5));
 
        for (int i=0; i<n; i++)
            for (int j=0; j<5; j++)
                cin >> grid[i][j];
 
        int l = 0;
        for (int r = 1; r<n; r++)
            if (superior(r, l)) l = r;
 
        bool flag = true;
        for (int r = 0; r<n; r++) if (r!=l)
            if(superior(r, l)) {flag = false; break;}
 
        cout << (flag ? l + 1 : -1) << '\n';
 
    }
 
}
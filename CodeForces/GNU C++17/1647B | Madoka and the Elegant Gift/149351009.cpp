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
 
    int t; cin >> t;
    while(t--)
    {
       int n, m; cin >> n >> m;
       string grid[n];
       for (int i=0; i<n; i++) cin >> grid[i];
 
        bool possible = true;
 
       for (int i=0; i<n-1; i++)
       {
            for (int j=0; j<m-1; j++)
            {
                int countWhite = 0;
                countWhite += grid[i][j] == '0';
                countWhite += grid[i+1][j] == '0';
                countWhite += grid[i][j+1] == '0';
                countWhite += grid[i+1][j+1] == '0';
 
                possible &= countWhite != 1;
            }
        
 
       }
 
       cout << ((possible)?"Yes\n":"NO\n");
 
    }
 
 
    
    return 0;
}
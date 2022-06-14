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
        int n, num; cin >> n;
        vector<int> bits(n+1);
        for (long long i=1; i<=n; i++)
        {
            cin >> num;
 
            bits[i] = bits[i-1]^num;
        }
 
        bool flag = !bits[n];
 
        for (int i=1; i<=n; i++)
            for (int j=i+1; j<n; j++)
                flag |= (bits[i] == (bits[j]^bits[i]) and bits[i] == (bits[n]^bits[j])); 
 
        cout << (flag ? "YES\n" : "NO\n");
 
    }
 
}
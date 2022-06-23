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
        int n; cin >> n;
        string r1, r2;
        cin >> r1 >> r2;
        int type[n] = {0};
 
        for (int i=0; i<n; i++)
            if (r1[i] != r2[i]) type[i] = 1;
            else if (r1[i] == '1') type[i] = 2;
            else type[i] = 3;
 
        for (int i=0; i<n-1; i++)
            if (type[i] + type[i+1] == 5) type[i] = type[i+1] = 4, i++;
 
        long long ans = 0;
        for (int i=0; i<n; i++) 
            if (type[i] == 1) ans += 2;
            else if (type[i] == 2) continue;
            else ans++;
 
        cout << ans << '\n';
 
    }
    
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
 
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
        int x = (n>>1) ;
        // cout << k << '\n';
        string str; cin >> str;
        
        int k = str.find('0')+1;
        if (k == 0) 
            cout << 1 << ' '
                 << n-1 << ' '
                 << 2 << ' '
                 << n << '\n';
        else if (k<x+1)
            cout << k << ' '
                 << n << ' '
                 << k+1 << ' '
                 << n << '\n';
        else 
            cout << 1 << ' '
                 << k << ' '
                 << 1 << ' '
                 << k-1 << '\n';
     }
    return 0;
}
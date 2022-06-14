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
        int n, k; cin >> n >> k;
        if (n & 1) // odd
            cout << (n-1)/2 << " " << (n-1)/2 << " 1\n";
        else { // even
            if (n/2 & 1)
                cout << (n-2)/2 << " " << (n-2)/2 << ' ' << 2 << '\n';
            else
                cout << n/2 << " " << n/4 << ' ' << n/4 << '\n';
        }
    }
    return 0;
}
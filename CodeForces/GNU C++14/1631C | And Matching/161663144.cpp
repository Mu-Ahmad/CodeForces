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
        int n, k; cin >> n >> k;
 
        if (n == 4 and k == 3) cout << "-1\n";
        else if (k == n-1)
        {
            cout << k << ' '
                 << k-1 << '\n'; 
 
            cout << 1 << ' '
                 << k-2 << '\n'; 
 
            cout << 0 << ' '
                 << 2 << '\n';
 
            for (int i=3; i<n/2; i++)
                cout << i << ' '
                     << n - i - 1 << '\n';
        }
        else if (k)
        {
            cout << 0 << ' '
                 << n - k - 1 << '\n';
            int _k = min(k, n - k - 1);
            for (int i=1; i<n/2; i++) if (i != _k)
                cout << i << ' '
                     << n - i - 1 << '\n';
            cout << k << ' '
                 << n-1 << '\n';
        }
        else
        {
            for (int i=0; i<n/2; i++)
                cout << i << ' '
                     << n - i - 1 << '\n';
        }
        // cout << "\n======\n";
    } 
    
    return 0;
}
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
        long long n; cin >> n;
        long long Y[n], X[n];
 
        for (long long i=0; i<n; i++) cin >> X[i] >> Y[i];
 
        if (n & 1) cout << "1\n";
        else
        {
            sort(X, X + n);
            sort(Y, Y + n);
 
            cout << (Y[n/2] - Y[n/2 - 1] + 1) * (X[n/2] - X[n/2 - 1] + 1) << '\n';
        }
    } 
    
    return 0;
}
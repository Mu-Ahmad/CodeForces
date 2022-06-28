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
     int n; cin >> n;
 
     vi arr(n);
 
     int x = 0;
     for (int i=0; i<n; i++) 
     {
        cin >> arr[i];
        x = x^arr[i];
     }
     // cout << x << ' ';
     for (int i=0; i<n; i++) 
     {
        if ((x ^ arr[i]) == arr[i])
        {
            cout << arr[i] << '\n';
            break;
        }
     }
 
    }
 
    return 0;
}
 
 
 
 
 
 
 
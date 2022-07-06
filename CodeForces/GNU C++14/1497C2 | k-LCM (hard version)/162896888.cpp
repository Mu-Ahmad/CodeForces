#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
#define ll long long
#define vll vector<ll>
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
#define fi first 
#define se second 
constexpr int MOD = (1e9) + 7;
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
 
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a, b, c;
        n = n-k+3;
        if (n & 1) // odd
        {
            a = b = (n-1)/2;
            c = 1;
        }
        else { // even
            if (n/2 & 1)
            {   
                a = b = (n-1)/2;
                c = 2;
            } else
            {   
                a = n/2;
                b = c = n / 4;
            }
        }
 
        for (int i=0; i<k-3; i++)
            cout << "1 ";
        cout << a << ' ' << b << ' ' << c << '\n';
    }
 
    return 0;
}
 
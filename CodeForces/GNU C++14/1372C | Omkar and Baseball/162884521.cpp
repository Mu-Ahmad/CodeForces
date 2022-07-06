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
const int MOD = 998244353;
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
 
    while(t--)
    {
        int n; cin >> n;
        vll arr(n);
 
        for(int i=0; i<n; i++) cin >> arr[i];
 
        if (is_sorted(arr.begin(), arr.end())) cout << "0\n";
        else
        {
            bool a, b, c;
            a = b = c = false;
            for (int i=0; i<n; i++)
            {
                if (arr[i] != i + 1 and !a) a = true;
                else if (arr[i] != i + 1 and b) c = true;
                else if (arr[i] == i + 1 and a) b = true;
            }
 
            cout << ((a and b and c) ? "2\n" : "1\n"); 
        }
    }
 
    return 0;
}
 
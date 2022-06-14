#include <bits/stdc++.h>
 
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
#define ll long long
#define pi pair<int, int>
#define vi vector <int>
 
using namespace std;
 
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
    while (t--)
    {
        int n;
        cin >> n;
 
        vi a(n), b(n);
 
        for (auto& c : a) cin >> c;
        for (auto& c : b) cin >> c;
 
        vi a1, a2;
        int diff = INT_MAX;
        for (int i=0; i<n; i++)
        {   
            if (b[i])
            {   
                a1.push_back(a[i] - b[i]);
                diff = a[i] - b[i];
            }
            else
            {
                a2.push_back(a[i]);
            }
        }
 
 
        bool flag = false;
        for (auto c : a1)
        {   
            // deb3(c, diff, 0);
            if (c != diff or c < 0) flag = true;
        }
 
        for (auto c : a2)
        {
            if (c > diff) flag = true;
        }
 
        cout << ((flag) ? "NO\n" : "YES\n");
 
    }
    return 0;
}
#include <bits/stdc++.h>
 
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
#define pi pair<int, int>
#define pii pair<int, pi>
#define fi first
#define se second
 
 
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
 
    while(t--)
    {   
        string s, t;
        cin >> s >> t;
        while(t.size() and s.size())
        {
            if (s.back() == t.back()) s.pop_back(), t.pop_back();
            else 
            {
                s.pop_back();
                if (s.size()) s.pop_back();
            }
        }
        cout << (t == "" ? "YES" : "NO") << "\n";
    }
}
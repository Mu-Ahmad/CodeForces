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
        string s; cin >> s;
        bool first = true;
        int femaleCount = 0;
        int ans = 0;
        for (auto ch : s)
        {   
            // cout << ch;
            if (ch == '0')
            {
                if (first)
                {
                    femaleCount = 0;
                    first = false;
                } else 
                {
                    ans += max(2 - femaleCount, 0);
                    // cout << "adding";
                    femaleCount = 0;
                }
            } else femaleCount++;
        }
 
        cout << ans << '\n';
 
    }
    return 0;
}
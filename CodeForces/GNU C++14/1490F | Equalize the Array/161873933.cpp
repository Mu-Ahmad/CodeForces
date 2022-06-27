#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
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
 
int solve(string& str, int i, int j)
{   
    int len = 0;
 
    for (auto num : str) if (num - '0' == i)
        len++, swap(i, j);
 
    if (i != j and len & 1) len--;
 
    return len;
}
 
int main()
{   
    stale_flippant();
    int t; cin >> t;
    while(t--)
    {
        int n, c; cin >> n;
        map<int, int> freq, size_freq;
        for (int i=0; i<n; i++)
        {
            cin >> c;
            freq[c]++;
        }
 
        for (auto& p : freq)
        {
            size_freq[p.second]++;
        }
 
        // for (auto p : size_freq)
        //     cout << p.first << ' '
        //          << p.second << '\n';
 
        vi dp(1e5+5, 0);
        int ans = INT_MAX;
        int upper_count = 0;
        for (int i = size_freq.rbegin()->first; i>-1; i--)
        {   
            upper_count += size_freq[i+1];
            size_freq[i] += size_freq[i+1];
            ans = min(ans, n  - size_freq[i]*i);
            // deb3(upper_count, i, size_freq[i]);
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}
 
 
 
 
 
 
 
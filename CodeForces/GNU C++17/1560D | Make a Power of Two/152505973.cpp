#include <bits/stdc++.h>
#define pii pair<int, int>
 
using namespace std;
 
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
int LCS(string& str1, string& str2)
{   
    int same = 0;
    int size1 = str1.size();
    // cout << str1 << ' ' << str2 << ' ';
    int idx1 = 0, idx2 = 0;
    while (idx1<str1.size() and idx2 < str2.size())
    {
        if(str1[idx1++] == str2[idx2]) idx2++, same++;
        // cout << str1 << '\n';
    }
    // cout << "\n---------\n"s;
    // cout << same << ' ' << size1 + str2.size() - 2*same << '\n';
    return size1 + str2.size() - 2*same;
}
 
int main()
{   
    stale_flippant();
    int t; cin >> t;
 
    vector<string> targets;
 
    for (int i = 0; i<63; i++)
    {
        targets.push_back(to_string(1ll<<i));
    }
 
    while(t--)
    {
        string n; cin >> n;
        int ans = INT_MAX;
 
        for (auto& target : targets)
            ans = min(ans, LCS(n, target));
 
        cout << ans << '\n'; 
    }
    return 0;
}
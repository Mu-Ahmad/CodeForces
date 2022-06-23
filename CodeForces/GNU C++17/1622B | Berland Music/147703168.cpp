#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int p[n], reverse[n];
        string str;
        for (int i=0; i<n; i++) {
            cin >> p[i], p[i]--, reverse[p[i]] = i;
            // cout << p[i] << '-' << reverse[p[i]] << ' ';
        }
        // cout << '\n';
        cin >> str;
        // cout << str;
        vector<int> liked, disliked;
        for (int i=0; i<n; i++)
            if (str[i] == '1') liked.push_back(p[i]);
            else disliked.push_back(p[i]);
 
        sort(liked.begin(), liked.end());
        sort(disliked.begin(), disliked.end());
 
        int ans[n] = {0}, idx = 0;
 
        for (auto song : disliked)
            ans[reverse[song]] = ++idx; 
 
        for (auto song : liked)
            ans[reverse[song]] = ++idx; 
 
        for (int i=0; i<n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}
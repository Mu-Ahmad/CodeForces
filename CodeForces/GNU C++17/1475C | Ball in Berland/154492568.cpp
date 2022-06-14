#include<bits/stdc++.h>
using namespace std;
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int main() {
    stale_flippant();
    int t; cin >> t;
 
    while(t--)
    {
        int b, g, l;
        cin >> b >> g >> l;
        vector<int> boys(b+1, 0), girls(g+1, 0);
        vector<pair<int, int>> links(l);
 
        for (int i=0; i<l; i++)
        {
            cin >> b;
            boys[b]++;
            links[i].first = b;
        }
 
        for (int i=0; i<l; i++)
        {
            cin >> b;
            girls[b]++;
            links[i].second = b;
        }
 
        long long ans = 0;
        for (auto link : links)
            ans += l - boys[link.first] - girls[link.second] + 1;
 
        cout << ans / 2 << '\n';
    }
    return 0;
}
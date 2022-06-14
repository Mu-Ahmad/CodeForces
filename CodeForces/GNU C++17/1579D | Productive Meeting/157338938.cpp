#include <bits/stdc++.h>
 
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
        int n, temp; cin >> n;
        priority_queue<pair<int, int>> q;
        vector<pair<int, int>> ans;
 
        for (int i=0; i<n; i++)
        {
            cin >> temp;
            if (temp)
                q.push({temp, i+1});
        }
 
        int l = 0, r = n-1;
        while(q.size() > 1)
        {
            auto p1 = q.top(); q.pop();
            auto p2 = q.top(); q.pop();
 
            ans.push_back({p1.second, p2.second});
            p1.first--;
            p2.first--;
 
            if (p1.first) q.push(p1);
            if (p2.first) q.push(p2);
        }
 
        cout << ans.size() << '\n';
        for (auto p : ans)
            cout << p.first << ' ' << p.second << '\n';
    }
}
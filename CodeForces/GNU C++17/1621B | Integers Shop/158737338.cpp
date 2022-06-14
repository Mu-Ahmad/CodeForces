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
 
    #define int long long
    int t; cin >> t;
 
    while(t--)
    {   
        int n; cin >> n;
 
        priority_queue <pii> maxQ;
        priority_queue <pi> midQ;
        priority_queue<pii, vector<pii>, greater<pii>> minQ;
        vector<int> l(n), r(n), c(n);
 
        for (int i=0; i<n; i++)
            cin >> l[i] >> r[i] >> c[i];
 
        for (int i=0; i<n; i++)
        {
            minQ.push({l[i], {c[i], i}});
            maxQ.push({r[i], {-1*c[i], i}});
            midQ.push({r[i] - l[i], -1*c[i]});
 
 
            auto s = minQ.top();
            auto e = maxQ.top();
            auto m = midQ.top();
 
            int ans = INT_MAX;
            // cout << s.se.se << ' ' << e.se.se << '\n';
            if (s.fi == l[e.se.se]) ans = c[e.se.se];
            if (e.fi == r[s.se.se]) ans = min(ans, c[s.se.se]);
            ans = min(ans, c[s.se.se] + c[e.se.se]);
            // deb3(e.fi - s.fi, m.fi, -1*m.se);
            if (e.fi - s.fi == m.fi) ans = min(ans, -1*m.se);
 
            cout << ans << "\n";
        }
    }
}
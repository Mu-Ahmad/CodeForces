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
    int W, H, w, h;
    int x1, y1, x2, y2;
    while(t--)
    {   
        cin >> W >> H;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> w >> h;
 
        int ans = INT_MAX;
 
        if (x2 - x1 + w <= W) 
        {
            ans = min(ans, max(0, w - x1));
            ans = min(ans, max(0, x2 - (W - w)));
        }
        if (y2 - y1 + h <= H) 
        {
            ans = min(ans, max(0, h - y1));
            ans = min(ans, max(0, y2 - (H - h)));
        }
 
        if (ans == INT_MAX) cout << "-1\n";
        else cout << setprecision(9) << fixed << double(ans) << '\n';
    }
   
    return 0;
}
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
        int num, n, W; cin >> n >> W;
        multiset<int> arr;
        for (int i=0; i<n; i++)
        {
            cin >> num; 
            arr.insert(num);
        }
 
        int ans = 1;
        int w = W;
        while(arr.size())
        {
            auto it = arr.upper_bound(w);
            if(it == arr.begin()) w = W, ans++;
            else
            {
                it--;
                w -= *it;
                arr.erase(it);
            }
        }
 
        cout << ans << '\n';
    }
    
    return 0;
}
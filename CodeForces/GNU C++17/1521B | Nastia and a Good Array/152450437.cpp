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
 
 
int main()
{   
    stale_flippant();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <int> arr(n);
        for (auto& c : arr) cin >> c;
        int idx = min_element(arr.begin(), arr.end()) - arr.begin();
 
        cout << n-1 << '\n';
 
        for (int i=0; i<n; i++) if (i!=idx)
        {
            cout << idx + 1 << ' ' 
                 << i + 1 << ' '
                 << arr[idx] << ' '  
                 << arr[idx] + abs(idx-i) << '\n';  
 
        }
 
    }
    return 0;
}
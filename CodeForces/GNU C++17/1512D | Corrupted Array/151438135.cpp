#include <bits/stdc++.h>
#define mod 1000000007
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
 
void solve()
{
    int n; cin >> n;
    vector<int> arr(n+2);
    for (auto& x : arr) cin >> x;
 
    int maxIdx = max_element(arr.begin(), arr.end()) - arr.begin();
    int maxNum = arr[maxIdx];
    arr[maxIdx] = INT_MIN;
    int secMaxIdx = max_element(arr.begin(), arr.end()) - arr.begin();
    int secMaxNum = arr[secMaxIdx];
    arr[maxIdx] = maxNum;
 
    ll totalSum = accumulate(arr.begin(), arr.end(), 0LL) - maxNum;
    // cout << "total Sum: " << totalSum << '\n';
    for (int i=0; i<n+2; i++) if (i != maxIdx)
    {
        if (totalSum - arr[i] == maxNum)
        {
            for (int j=0; j<n+2; j++) if (j != maxIdx and j != i)
            {
                cout << arr[j] << ' ';
            }
            cout << '\n';
            return;
        }
    }
 
    if (totalSum - secMaxNum == secMaxNum)
    {
        for (int j=0; j<n+2; j++) if (j != maxIdx and j != secMaxIdx)
        {
            cout << arr[j] << ' ';
        }
        cout << '\n';
        return;
    }
 
    cout << "-1\n";
    return;
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
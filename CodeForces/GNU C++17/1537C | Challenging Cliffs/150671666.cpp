#include <bits/stdc++.h>
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
 
 
int main()
{   
    stale_flippant();
 
    int t ; cin >> t;
 
 
    while(t--)
    {   
        int n; cin >> n;
        int arr[n];
        for (int i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
 
        if (n == 2) {
            cout << arr[0] << ' ' << arr[1] << '\n';
            continue;
        }
        int idx = 0, final_idx = 0;
        int curr = INT_MAX;
        for(;idx<n-1; idx++)
        {
            if (arr[idx+1] - arr[idx] < curr)
            {
                final_idx = idx+1;
                curr = arr[idx+1] - arr[idx];
            }
        }
 
        for (int i = final_idx; i<n; i++)
            cout << arr[i] << ' ';
 
        for (int i = 0; i<final_idx; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    return 0;
}
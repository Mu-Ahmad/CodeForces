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
 
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];
        for (int i=0; i<n; i++) cin >> arr[i];
 
        int m = *max_element(arr, arr+n);
 
        if (arr[0] == m or arr[n-1] == m)
            for (int i=n-1; i>=0; i--)
                cout << arr[i] << ' ';
        else cout << "-1";
 
        cout << '\n';
    }
    
    return 0;
}
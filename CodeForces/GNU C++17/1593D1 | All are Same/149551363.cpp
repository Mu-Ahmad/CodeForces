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
        int smallest = *min_element(arr, arr+n);
        int differences[n];
        for (int i=0; i<n; i++) differences[i] = abs(smallest - arr[i]);
        int ans = abs(__gcd(differences[0], differences[1]));
        for (int i=0; i<n; i++) {
            // cout << differences[i] << '\n';
            if (ans == 0) ans = differences[i];
            else ans = min(ans, abs(__gcd(ans, differences[i])));
        }
        if (ans == 0) ans--; 
        cout << ans << '\n';
    }
    return 0;
}
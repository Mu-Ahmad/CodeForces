#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pii>
 
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
        vi arr(n);
        for (auto& c : arr) cin >> c;
 
        // for (int i=0; i<n; i++)
        // {   
        //     bitset<5> bs(arr[i]);
        //     cout << bs << ' ';
        // }
 
        cout << "0 ";
        for (int i=1; i<n; i++)
        {   
            bitset<6> bs((arr[i] & arr[i-1]) ^ arr[i-1]);
            cout << ((arr[i] & arr[i-1]) ^ arr[i-1]) << ' ';
            arr[i] |= ((arr[i] & arr[i-1]) ^ arr[i-1]);
        }
 
        cout << '\n';
    }    
    return 0;
}
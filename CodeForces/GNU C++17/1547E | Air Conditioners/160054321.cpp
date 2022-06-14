#include <bits/stdc++.h>
 
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
#define ll long long
#define pii pair<int, char>
#define vi vector <int>
 
using namespace std;
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
class node
{
public:
    int size = 0, left_path = 0, right_path = 0;
    node *left = NULL, *right = NULL;
    
};
 
 
 
int main()
{   
    stale_flippant();
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        vector<ll> arr(n+1, INT_MAX);
 
        int idx[k], value[k];
        for (int i=0; i<k; i++)
            cin >> idx[i] ;
        for (int i=0; i<k; i++)
            cin >> value[i];
 
        for (int i=0; i<k; i++)
            arr[idx[i]] = value[i];
 
 
        for (int i=1; i<=n; i++)
            arr[i] = min(arr[i], arr[i-1] + 1);
 
        // for (int i=1; i<n; i++)
        //     cout << arr[i] << ' ';
        // cout << '\n';
 
        for (int i=n-1; i>0; i--)
            arr[i] = min(arr[i], arr[i+1] + 1);
 
        for (int i=1; i<=n; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    return 0;
}
 
 
 
 
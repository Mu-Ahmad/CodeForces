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
       string str; cin >> str;
 
 
       vi arr(n+1, 0);
       str = 'a' + str;
 
       for(int i=1; i<=n; i++)
       {
        arr[i] = arr[i-1];
        if (str[i] == 'W') arr[i]++;
       }
 
       // for(int i=1; i<=n; i++) cout << arr[i];
        // cout << '\n';
        int ans = INT_MAX;
        for (int i=k ;i<=n; i++)
        {   
            ans = min(ans, arr[i]-arr[i-k]);
        }
 
        cout << ans << '\n';
 
    }
    return 0;
}
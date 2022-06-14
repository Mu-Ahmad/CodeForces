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
       int n, k, x; cin >> n >> k;
 
       vector<int> weights;
       ll ans = 0;
       for (int i=0; i<n; i++) 
       {
            cin >> x;
            ans += x / k;
            weights.push_back(x % k);
       }
 
    sort(weights.begin(), weights.end());
 
    int l =0, r=n-1;
 
    while(l<r)
    {   
        if (weights[l] + weights[r] < k) l++;
        else {l++, r--, ans++;}
    }
 
    cout << ans << '\n';
 
    }
    return 0;
}
 
 
 
 
#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
 
#define ll long long
#define vi vector<ll>
 
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
    
        int n, k; cin >> n >> k;
        vi arr(n);
 
        for(int i=0; i<n; i++) cin >> arr[i];
 
        int count = 0;
 
        for (int i=1; i<n-1; i++) if (arr[i] > arr[i-1] + arr[i+1]) count++;
 
        if (k != 1) cout << count << '\n';
        else   
        {   
            int count1 = 0;
            for (int i=1; i<n-1; i+=2) count1++;
        
            cout << max(count1, count) << '\n';
        }
 
    }
 
    return 0;
}
 
 
 
 
 
 
 
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
    // stale_flippant();
    int x, t; cin >> t;
    while(t--)
    {
    
        int n; cin >> n;
        int l =1, r = n;
        while(l<r)
        {
            int mid = (l + r) / 2;
            cout << "? " << l << ' ' << mid << endl;
            int count = 0;
            for (int i=l; i<=mid; i++)
            {
                cin >> x;
                if (l <= x and x <= mid) count++;
            }
            if (count & 1) r = mid;
            else l = mid+1;
        }
 
        cout << "! "<< l << endl;
 
    }
 
    return 0;
}
 
 
 
 
 
 
 
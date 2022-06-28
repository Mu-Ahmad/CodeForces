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
 
int solve(string& str, int i, int j)
{   
    int len = 0;
 
    for (auto num : str) if (num - '0' == i)
        len++, swap(i, j);
 
    if (i != j and len & 1) len--;
 
    return len;
}
 
int n;
 
int main()
{   
    stale_flippant();
    #define int long long
    int t; cin >> t;
    while(t--)
    {
        cin>>n;
        
        vi v(n,0);
        
        for(int i=0;i<n;i++) cin>>v[i];
        
        ll even_sum = v[0];
        ll odd_sum = v[1];
        
        ll even_min = v[0];
        ll odd_min = v[1];
        
        ll ans = (even_sum*n) + (odd_sum*n);
        
        for(ll i=2;i<n;i++)
        {
            if(i%2)
            {
                odd_sum+=v[i];
                odd_min=min(odd_min,v[i]);
            }
            else
            {
                even_sum+=v[i];
                even_min=min(even_min,v[i]);
            }
            
            ll even = (i/2) + 1;
            ll odd = (i+1)/2;
            
            ll odd_ans = odd_sum + odd_min*(n-odd);
            ll even_ans = even_sum + even_min*(n-even);
            
            ans = min(ans,odd_ans+even_ans);
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
 
 
 
 
 
 
 
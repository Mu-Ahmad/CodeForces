#include <bits/stdc++.h>
 
using namespace std;
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
}
 
long long n, limit;
int _count = 0;
 
long long solve(long long num)
{      
    if(num >= n+n) {
        // cout << "Here\n";
        return limit+1;
    }
    if (num < n)
        return (num*(num+1)) / 2;
    else 
    {
        // cout << num << ' ';
        num -= n;
        num = max(n-1 - num, 0ll);
        long long ans = (n*(n+1)) / 2;
        // cout << ans << ' ' << (ans - n) << ' ' << ((num*(num+1)) / 2) << ' ';
        // cout << ans + (ans - n) - ((num*(num+1)) / 2) << '\n';
        return ans + (ans - n) - ((num*(num+1)) / 2);
    }
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {   
 
        cin >> n >> limit;
        long long k = -1;
        if (n==1) cout << "1\n";
        else {
 
            for(int i=n*2+1; i>0; i/=2)
                while(solve(k+i) < limit) k+=i;
            
            // cout << solve(3) << '\n';
            cout << min(k + 1, n+n - 1) << '\n';
        }
    }
    
    return 0;
}
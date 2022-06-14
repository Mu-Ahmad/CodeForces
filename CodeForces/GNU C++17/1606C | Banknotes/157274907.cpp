#include <bits/stdc++.h>
 
using namespace std;
 
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
        long long n, k;
        cin >> n >> k;
        k++;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
 
        long long ans = 0;
        for(int i=0; i<n; i++)
        {
            long long max_amount = pow(10, arr[i+1]) - 1;
            long long taken = k;
            if(i+1<n)
                taken = min((long long)(max_amount / pow(10, arr[i])), k);
            k -= taken;
            ans += taken * (long long)pow(10, arr[i]);
        }
 
        cout << ans << '\n';
 
    }
}
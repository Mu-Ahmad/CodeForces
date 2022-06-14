#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n), b(n);
 
        for (int i=0; i<n; i++)
            cin >> a[i];
 
        for (int i=0; i<n; i++)
            cin >> b[i];
 
        long long ans = 0;
 
        for(int i=1; i<n; i++)
        {
            long long diff1 = abs(a[i-1]-a[i]) + abs(b[i-1]-b[i]);
            long long diff2 = abs(a[i-1]-b[i]) + abs(b[i-1]-a[i]);
 
            if (diff2 < diff1)
            {
                swap(a[i], b[i]);
                ans += diff2;
            } else ans += diff1;
        }
 
        cout << ans << '\n';
    }
}
 
 
 
 
 
 
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i=0; i<n; i++) cin >> arr[i];
 
        if (n == 1) {cout << arr[0] << '\n'; continue;}
 
        sort(arr.begin(), arr.end());
 
        int ans = INT_MIN;
        int factor = 0;
 
        for (auto num : arr){
            num -= factor;
            ans = max(ans, num);
            factor += num;
        }
 
        cout << ans << '\n'; 
 
    }
    return 0;
}
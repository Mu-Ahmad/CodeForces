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
        int n, temp; cin >> n;
        vector <pair<int, int>> arr(n);
 
        for (int i=0; i<n; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i+1;
        }
 
        sort(arr.begin(), arr.end());
 
        vector <long long> running_sum(n, arr[0].first);
 
        for (int i=1; i<n; i++)
            running_sum[i] = running_sum[i-1] + arr[i].first; 
 
 
        int ans = n-1;
        for (int i=n-1; i>0; i--)
            if (arr[i].first<=running_sum[i-1]) ans = i-1;
            else break;
 
        vector<int> ans_array;
        for(;ans<n; ans++)
            ans_array.push_back(arr[ans].second);
 
        sort(ans_array.begin(), ans_array.end());
        cout << ans_array.size() << '\n';
        for (int a : ans_array)
            cout << a << ' ';
        cout << '\n';
 
    }
}
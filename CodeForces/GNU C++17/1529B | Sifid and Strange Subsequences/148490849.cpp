#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
void stale_flippant() 
{
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
      int n; cin >> n;
      vector<int> arr(n);
      int zero_count = 0;
      for (int i=0; i<n; i++) 
      {
        cin >> arr[i];
        if (arr[i] == 0) zero_count++;
      }
 
      sort(arr.begin(), arr.end());
 
      auto it = upper_bound(arr.begin(), arr.end(), 0);
      auto it1 = lower_bound(arr.begin(), arr.end(), 0);
 
      int min_diff = INT_MAX;
      for (auto itx = arr.begin() + 1; itx < it; itx++)
      {
        min_diff = min(min_diff, abs(*itx - *(itx-1)));
      }
 
      int ans = it - arr.begin() + (zero_count <= 1 and min_diff >= *it);
      cout << min(n, ans) << '\n';
    }
    
    return 0;
}
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
      int n; cin >> n;
      vector<int> arr(n);
      for (int i=0; i<n; i++)
        cin >> arr[i];
 
      sort(arr.begin(), arr.end());
      long long running = arr[0] + arr[1] - arr[n-1];
      
      if (running < 0)
        {
            puts("YES");
            continue;
        }
 
      int r = 2, l = n-2;
      bool found = false;
      while(r<l)
      {
        running += arr[r++];
        running -= arr[l--];
 
        if (running < 0)
        {
            puts("YES");
            found = true;
            break;
        }
      }
 
      if (!found) puts("NO");
    }
    return 0;
}
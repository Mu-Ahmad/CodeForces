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
      int arr[n]; for (int i=0; i<n; i++) cin >> arr[i];
 
      set<int> ans;
      for (int i=0;i<n;i++)
        while(arr[i])
        {
            if (arr[i] <=n and ans.count(arr[i]) == 0)
            {
                ans.insert(arr[i]);
                break;
            }
            arr[i] >>= 1;
        }
        
 
        puts((ans.size() == n) ? "YES" : "NO");
    }
    
    return 0;
}
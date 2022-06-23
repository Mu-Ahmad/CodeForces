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
        int r, b; cin >> r;
        vector<int> red(r);
 
        for (int i=0; i<r; i++) cin >> red[i];
 
        cin >> b;
        vector<int> blue(b);
        for (int i=0; i<b; i++) cin >> blue[i];
 
        int running_sum = 0, final_sum = 0;
 
        for (int i=0; i<r; i++)
        {
            running_sum += red[i];
            final_sum = max(running_sum, final_sum);
        }
 
        int ans = final_sum;
        running_sum = final_sum = 0;
        for (int i=0; i<b; i++)
        {
            running_sum += blue[i];
            final_sum = max(running_sum, final_sum);
        }
 
        cout << ans + final_sum << '\n';
 
    }
    
    return 0;
}
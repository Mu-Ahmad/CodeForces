#include<bits/stdc++.h>
using namespace std;
 
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
int main() {
    stale_flippant();
    int t; cin >> t;
 
    while(t--)
    {
        string str; cin >> str;
        vector<vector<int>> dp(2, vector<int>(str.size()+1,0));
        // for(int i=1; i<=str.size(); i++)
            // if(str[i-1] != '?') dp[str[i-1]=='1'][i] = 1;
 
        // int id0, id1, id2;
        // for(int i=1; i<=str.size(); i++)
        //     if (str[i-1] == '0'){id0 = i; break;}
 
        // for(int i=1; i<=str.size(); i++)
        //     if (str[i-1] == '1'){id1 = i; break;}
 
        // for(int i=1; i<=str.size(); i++)
        //     if (str[i-1] == '?'){id2 = i; break;}
 
        // dp[0][min(id0, id2)] = 1;
        // dp[1][min(id1, id2)] = 1;
        long long ans = 0;
        long long count = 1;
        for(int i=1; i<=str.size(); i++)
            if(str[i-1] == '?')
            {   
                dp[0][i] = dp[1][i-1] + 1;
                dp[1][i] = dp[0][i-1] + 1;
                ans-=count;
                count++;
            } else {
                count=1;
                dp[str[i-1]=='1'][i] += dp[str[i-1]=='0'][i-1] + 1;
            }
 
        // for(int i=1; i<=str.size(); i++){
        //     if (dp[0][i] > 2) dp[0][i]--;
        //     if (dp[1][i] > 2) dp[1][i]--;
        // }
        // for(int i=1; i<=str.size(); i++)
        //     cout << dp[0][i] << ' ';
        // cout << '\n';
 
        // for(int i=1; i<=str.size(); i++)
        //     cout << dp[1][i] << ' ';
        // cout << '\n';
 
        ans += accumulate(dp[0].begin(), dp[0].end(), 0ll);
        ans += accumulate(dp[1].begin(), dp[1].end(), 0ll);
 
        // long long ans = *max_element(dp[0].begin(), dp[0].end());
        // ans += *max_element(dp[1].begin(), dp[1].end());
        cout << ans << '\n';
        // cout << dp[0][str.size()] + dp[0][str.size()] << '\n';
    }
 
    
}
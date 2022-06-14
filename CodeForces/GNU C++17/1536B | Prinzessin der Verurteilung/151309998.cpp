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
 
void solve(string s)
{
    char ans = 'a';
 
    while(ans <= 'z')
    {
        if (s.find(ans) == string::npos) 
        {
            cout << ans << '\n';
            return;
        }
        ans++;
    }
 
    string query = "aa";
 
        for(int i=0; i<26; i++)
        {   
            query[0] += (i!=0);
            for (int j=0; j<26; j++)
            {
                query[1] += (j>0);
                if (s.find(query) == string::npos) 
                    {
                        cout << query << '\n';
                        return;
                    }
                // cout << query << '\n';
            }
            query[1] = 'a';
        }
    
 
    query = "aaa";
 
    for(int i=0; i<26; i++)
    {   
        query[0] += (i!=0);
        for (int j=0; j<26; j++)
        {
            query[1] += (j>0);
            for (int k=0; k<26; k++)
            {   
                query[2] += (k>0);
                if (s.find(query) == string::npos) 
                {
                    cout << query << '\n';
                    return;
                }
                // cout << query << '\n';
            }
            query[2] = 'a';
        }
        query[1] = 'a';
    }
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        solve(s);
    }
    return 0;
}
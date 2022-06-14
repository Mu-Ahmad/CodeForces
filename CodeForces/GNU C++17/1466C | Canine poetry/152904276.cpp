#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pii>
#define MAX 2000006
 
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
        string str; cin >> str;
        int ans = 0;
        for (int i=0; i<str.size()-1; i++)
        {   
            if(str[i] == 'F') continue;
            if (str[i] == str[i+1]) 
            {
                ans++;
                str[i+1] = 'F';
            }
            if (i < str.size() - 2 and str[i] == str[i+2]) 
            {
                str[i+2] = 'F';
                ans++;
            }
        }
 
        cout << ans << '\n';
    }
    return 0;
}
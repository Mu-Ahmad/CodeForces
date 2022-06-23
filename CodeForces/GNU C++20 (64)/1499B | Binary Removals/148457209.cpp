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
        string str; cin >> str;
        int r = str.find("11");
        int l = str.rfind("00");
 
        if (l == -1 or r == -1 or r > l) puts("YES");
        else puts("NO");
 
    }
    
    return 0;
}
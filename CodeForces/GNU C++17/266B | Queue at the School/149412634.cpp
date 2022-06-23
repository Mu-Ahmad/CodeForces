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
 
    int n, t; cin >> n >> t;
 
    string str; cin >> str;
 
    while(t--)
    {
        string s = str;
 
        for(int i=0; i<n-1; i++)
            if (str[i] == 'B' and str[i+1] == 'G')
                swap(s[i], s[i+1]);
 
        str = s;
    }
 
    cout << str << '\n';
    
    return 0;
}
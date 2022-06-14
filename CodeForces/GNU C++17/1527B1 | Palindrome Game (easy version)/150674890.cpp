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
 
    int t ; cin >> t;
 
 
    while(t--)
    {   
        int n; cin >> n;
        string s; cin >> s;
        int c = count(s.begin(), s.end(), '0');
        // cout << c << '\n';
        if (c == 1 or (c % 2) == 0) cout << "BOB\n";
        else cout << "ALICE\n"; 
        
    }
    return 0;
}
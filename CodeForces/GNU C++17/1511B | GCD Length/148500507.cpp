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
        int a, b, c; cin >> a >> b >> c;
 
        cout << (int)pow(10, a-1)<< " 1";
 
        for (int i=0; i<b-c; i++) cout << "1";
        for (int i=0; i<c-1; i++) cout << "0";
        cout << '\n';
    }
 
    
    return 0;
}
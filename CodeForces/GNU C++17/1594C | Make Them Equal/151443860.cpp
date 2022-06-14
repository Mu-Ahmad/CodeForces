#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define maxSize 3000005
 
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
        int n; char c; string s;
        cin >> n >> c >> s;
        // cout << s.rfind('z') << '\n';
        if (count(s.begin(), s.end(), c) == n)
        {
            cout << "0\n";
        } else if (s.rfind(c) != string::npos and n / (s.rfind(c) + 1) < 2)
        {
            cout << "1\n";
            cout << (s.rfind(c) + 1) << '\n';
        }else 
        {
            cout << "2\n";
            cout << n-1 << " " << n << '\n';
        } 
    }
    return 0;
}
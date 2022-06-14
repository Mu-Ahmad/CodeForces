#include <bits/stdc++.h>
 
#define ll long long
#define pi pair<int, int>
#define vi vector <int>
 
using namespace std;
 
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
    while (t--)
    {
        int n;
 
        cin >> n;
 
        int b = ceil(n / 3.0) + 1;
        int c = n / 3 - 1;
        int a = n - c - b;
 
        cout << a << ' ' << b << ' ' << c << '\n';
 
    }
    return 0;
}
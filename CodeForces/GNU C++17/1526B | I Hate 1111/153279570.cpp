#include<bits/stdc++.h>
#define mod 32768
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
 
    vector<bool> possible(2099, false);
 
    possible[11] = possible[111] = true;
 
    for(int i=11; i<=1099; i++) if (possible[i])
        possible[i+11] = possible[i+111] = true;
    while(t--)
    {
        int n; cin >> n;
        cout << ((n > 1099 or possible[n]) ? "YES\n" : "NO\n");
    }
}
#include <bits/stdc++.h>
#define mod 1000000007
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
 
long long power(long long base, long long exp)
{
    if (exp == 0) return 1;
    if (exp == 1) return base;
 
    return (base * power(base, exp-1) % mod) % mod;
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {
        long long n, k; cin >> n >> k;
        cout << power(n, k) % mod << '\n';
    }
    return 0;
}
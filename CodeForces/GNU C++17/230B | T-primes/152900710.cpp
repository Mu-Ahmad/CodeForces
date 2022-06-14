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
 
bitset<MAX> isPrime;
set<ll> prime;
void sieve() {
    for (int i = 0; i < MAX; i++) isPrime[i] = 1;
 
    isPrime[0] = isPrime[1] = 0;
 
    for (ll i = 2; i * i < MAX; i++) {
        if (isPrime[i])
            for (ll j = i * i; j < MAX; j += i)
                isPrime[j] = 0;
    }
 
    for (ll i = 0; i < MAX; i++)
        if (isPrime[i])
            prime.insert(i*i);
 
    return;
}
 
int main()
{   
    stale_flippant();
    sieve();
 
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
 
        cout << ((prime.count(n)) ? "YES\n" : "NO\n");
 
    }
 
    return 0;
}
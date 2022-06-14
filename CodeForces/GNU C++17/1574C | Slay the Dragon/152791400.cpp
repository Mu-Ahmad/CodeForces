#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pii>
 
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
    ll n; cin >> n;
    vll arr(n);
    for (auto& c : arr) cin >> c;
    ll d; cin >> d;
    ll total_power = accumulate(arr.begin(), arr.end(), 0LL);
    sort(arr.begin(), arr.end());
    while(d--)
    {
        ll attack, defense;
        cin >> attack >> defense;
 
        auto it = lower_bound(arr.begin(), arr.end(), attack);
 
        int offence;
        if (it == arr.begin() or *it == attack)
        {
            cout << max(0LL, defense - total_power + *it) << '\n';
        } else if (it == arr.end())
        {   
            it--;
            cout << (max(0LL, attack - *it) + max(0LL, defense - total_power + *it)) << '\n';
        } else
        {
            ll ans = (max(0LL, attack - *it) + max(0LL, defense - total_power + *it));
            it--;
            ans = min(ans, (max(0LL, attack - *it) + max(0LL, defense - total_power + *it)));
    
            cout << max(ans, 0LL) << '\n';
        }
 
    }
    
    return 0;
}
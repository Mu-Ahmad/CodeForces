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
 
 
    ll n, k, x, temp; cin >> n >> k >> x;
    set <ll> arr;
    for (ll i=0; i<n; i++) {
        cin >> temp;
        arr.insert(temp);
    }
    vector<pair<ll, ll>> sets = {{*arr.begin(), *arr.begin()}};
    vector <ll> diff;
    for (auto num : arr)
    {
        if (num - (sets.end()-1)->second > x) sets.push_back({num, num});
        else (sets.end()-1)->second = num;
    }
 
    // for (auto num : sets) cout << num.second << ' ';
    // cout << '\n';
    for (ll i=0; i<sets.size() -1; i++)  {
        // cout << (sets[i+1].first - sets[i].second)/x  << ' ';
        diff.push_back((sets[i+1].first - sets[i].second)/x - ((sets[i+1].first - sets[i].second)%x == 0));
    }
    
    sort(diff.begin(), diff.end(), greater<ll>());
    
    ll ans = 0;
    while(diff.size() and k >= *(diff.end()-1))
    {
        // cout << *(diff.end()-1) << '\n';
        k -= *(diff.end()-1);
        ans++; diff.pop_back();
 
    }
 
    cout << sets.size() - ans << '\n';
    
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
    int n; cin >> n;
    ll a[n], b[n];
    bool visited[n] = {0};
    map<ll, ll> freq;
    vector<int> arr;
 
    for (int i=0; i<n; i++) cin >> a[i], freq[a[i]]++;
    for (int i=0; i<n; i++) cin >> b[i];
    for (int i=0; i<n; i++) if (freq[a[i]] > 1) arr.push_back(i), visited[i] = true;
    for (int i=0; i<n; i++) 
    {
        if (visited[i]) continue;
        for (auto x : arr)
            if (a[x] > a[i] and ((a[i] & a[x]) == a[i]))
            {
                arr.push_back(i);
                visited[i] = true;
                break;
            }
    }
    ll ans = 0;
    for (auto x : arr)
    {
        ans += b[x];
    }
 
    cout << ans << '\n';
    return 0;
}
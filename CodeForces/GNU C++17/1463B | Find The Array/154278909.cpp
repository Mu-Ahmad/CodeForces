#include<bits/stdc++.h>
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
    int t, n; cin >> t;
 
    while(t--)
    {
        cin >> n; 
        vector<int> arr(n);
        for (auto& c : arr) cin >> c;
 
        long long oddSum = 0;
        for (int i=1; i<n; i+=2) oddSum += arr[i] - 1;
        long long evenSum = 0;
        for (int i=0; i<n; i+=2) evenSum += arr[i] - 1;
        
        // cout << evenSum << ' ' << oddSum << ' ';
        if (evenSum < oddSum)
            for (int i=0; i<n; i+=2) arr[i] = 1;
        else
            for (int i=1; i<n; i+=2) arr[i] = 1;
 
        for (auto& c : arr) cout << c << ' ';
        cout << '\n';
    }
 
    
}
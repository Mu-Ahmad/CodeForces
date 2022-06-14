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
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vi arr(n), red, blue;
        for (int i=0; i<n; i++) cin >> arr[i];
        char ch;
        for (int i=0; i<n; i++) 
        {
            cin >> ch;
            if (ch == 'R') red.push_back(arr[i]);
            else blue.push_back(arr[i]);
        }
 
        sort(red.begin(), red.end());
        sort(blue.begin(), blue.end());
 
        int curr = 1;
 
        for (auto& num : blue)
            if (num >= curr) curr++;
 
 
        for (auto& num : red)
            if (num <= curr) curr++;
 
        cout << ( (curr - 1 < n) ? "NO\n" : "YES\n"); 
 
    }    
    return 0;
}
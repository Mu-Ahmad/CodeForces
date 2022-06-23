#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
int main()
{
    int t; cin >> t;
    string s1, s2;
    while (t--)
    {
        int n, k, temp;
        cin >> n >> k;
        multiset<int> positions;
 
        for (int i=0; i<k; i++) {cin >> temp, positions.insert(temp);}
 
        int ans = 0, cat = 0;
 
        for (auto it = positions.rbegin(); it != positions.rend() and *it > cat; it++)
            {cat += (n - *it); ans++;}
 
        cout << ans << '\n';
    }
    return 0;
}
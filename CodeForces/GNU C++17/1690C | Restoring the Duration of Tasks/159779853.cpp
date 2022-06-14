#include <bits/stdc++.h>
 
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
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
 
        vi arrive(n), ended(n);
 
        for (auto& c : arrive) cin >> c;
        for (auto& c : ended) cin >> c;
 
        int start = arrive[0];
 
        for (int i = 0; i<n; i++)
        {   
            start = max(start, arrive[i]);
            // deb3(start, ended[i], i);
            cout << ended[i] - start << ' ';
            start = ended[i];
        }
 
        cout << '\n';
 
    }
    return 0;
}
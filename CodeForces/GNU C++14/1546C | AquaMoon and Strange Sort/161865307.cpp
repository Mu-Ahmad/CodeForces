#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
 
#define ll long long
#define vi vector<int>
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int solve(string& str, int i, int j)
{   
    int len = 0;
 
    for (auto num : str) if (num - '0' == i)
        len++, swap(i, j);
 
    if (i != j and len & 1) len--;
 
    return len;
}
 
int main()
{   
    stale_flippant();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vi arr(n);
        for (int i=0; i<n; i++) cin >> arr[i];
 
        vector<vi> pos_counter1(2, vi(1e5+1, 0)), pos_counter2(2, vi(1e5+1, 0));
 
        for (int i=0; i<n; i++)
            pos_counter1[i&1][arr[i]]++; 
 
        sort(arr.begin(), arr.end());
 
        for (int i=0; i<n; i++)
            pos_counter2[i&1][arr[i]]++; 
 
        bool flag = true;
        for (int i=0; i<n; i++)
            if (pos_counter1[0][arr[i]] != pos_counter2[0][arr[i]] or 
                pos_counter1[1][arr[i]] != pos_counter1[1][arr[i]])
                flag = false;
 
        cout << (flag ? "YES\n" : "NO\n");
    }
 
    return 0;
}
 
 
 
 
 
 
 
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
        int n, l, r, c;
        cin >> n >> l >> r;
 
        map <int, int> left, right;
 
        for (int i=0; i<l; i++)
        {
            cin >> c;
            left[c]++;
        }
 
        for (int i=0; i<r; i++)
        {
            cin >> c;
            right[c]++;
        }
 
        for (auto it = left.begin(); it != left.end(); it++)
        {   
            int temp = min(left[it->first], right[it->first]);
            left[it->first] -= temp;
            right[it->first] -= temp;
        }
 
        vi left_count(3, 0), right_count(3, 0);
        for (auto it = left.begin(); it != left.end(); it++)
        {
            left_count[1] += it->second % 2; 
            left_count[2] += it->second / 2; 
        }
        left_count[2] *= 2; 
 
        for (auto it = right.begin(); it != right.end(); it++)
        {
            right_count[1] += it->second % 2; 
            right_count[2] += it->second / 2; 
        }
        right_count[2] *= 2; 
 
        vi bigger_count;
        int lesser = 0;
        if (l > r) 
        {
            bigger_count = left_count;
            lesser = right_count[1] + right_count[2];
        } else 
        {
            bigger_count = right_count;
            lesser = left_count[1] + left_count[2];    
        }
        ll ans = lesser;
        // cout << lesser << ' ' << bigger_count[1] << ' ' << bigger_count[2];
        int temp = min(lesser, bigger_count[1]);
        bigger_count[1] -= temp;
        lesser -= temp;
 
        bigger_count[2] -= lesser;
 
        ans += bigger_count[1];
        ans += bigger_count[2] / 2;
 
        cout << ans << '\n';
    }
 
    return 0;
}
 
 
 
 
 
 
 
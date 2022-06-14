#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define maxSize 3000005
 
using namespace std;
 
 
void stale_flippant() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
template <typename T>
bool notValid(T start, T end)
{
    if (start>=end) return false;
    return is_sorted(start, end) == false;
}
 
template <typename T>
void print(T start, T end)
{
    while (start<end)
    {
        cout << *start++ << ' ';
    }
    cout << '\n';
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> arr(n);
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        if(notValid(arr.end()-k, arr.begin()+k)) cout << "NO\n";
        else
        {
            auto s = arr.end()-k, e = arr.begin()+k;
            if (s >= e) cout << "YES\n";
            else 
            {
                auto p1 = *min_element(s, e);
                auto p2 = *max_element(s, e);
                // print(s, e);
                    // cout << p1 << ' ' << p2 << '\n';
                int op[2] = {0, 0};
                int c1 = 0, c2 = 0;
                for (auto it = arr.begin(); it<s; it++)
                {   
                    c1++;
                    // cout << *it << ' ' << *p.first << ' ' << *p.second << '\n';
                    if (*it <= p1) op[0]++;
                    if (*it >= p2) op[1]++;
                }
 
                for (auto it = e; it<arr.end(); it++)
                {   
                    c2++;
                    // cout << *it << ' ' << p1 << ' ' << p2 << '\n';
                    if (*it <= p1) op[0]++;
                    if (*it >= p2) op[1]++;
                }
 
                if (op[0] >= c1 and op[1] >= c2) cout << "YES\n";
                else cout << "NO\n";
            }
        }
        
    }
    return 0;
}
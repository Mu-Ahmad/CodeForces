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
bool isCorrect(T s, T s1, T end)
{
    while (s<end)
    {
        if (*s++ != *s1++) return false;
    }
    return true;
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
        auto s = arr.end()-k;
        auto e = arr.begin()+k;
 
        vector<int> other = arr;
 
        sort(other.begin(), other.end());
        auto s1 = other.end()-k;
        if (isCorrect(s, s1, e)) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}
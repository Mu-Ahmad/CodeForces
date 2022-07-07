#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
#define ll long long
#define vll vector<ll>
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
#define fi first 
#define se second 
constexpr int MOD = (1e9) + 7;
 
int solve(string str, int n)
{
    string ans = "";
    while(ans.size() < n) ans += str;
    cout << ans.substr(0, n) << "\n";
 
    return 0;
}
 
int main()
{   
    stale_flippant();
 
    int n, k; cin >> n >> k;
 
    string str; cin >> str;
 
    string ans = ""; 
    while(ans.size() < k) ans += str;
    ans = ans.substr(0, k);
    
    for (int i=1; i<n; i++)
    {
        string temp = "";
        string temp_str = str.substr(0, i); 
        while(temp.size() < k) temp += temp_str;
        temp = temp.substr(0, k);
        ans = min(ans, temp);
    }
 
 
    cout << ans << '\n';
    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
ll gcd(ll a,ll b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
 
ll lcm(ll a,ll b){
    return a/gcd(a,b)*b;
}
 
string mul(string s, int n){
    string ans = "";
    while (n--) ans += s;
    return ans;
}
 
 
int main()
{
    int t; cin >> t;
    string s1, s2;
    while (t--)
    {
        cin >> s1 >> s2;
        int n = lcm(s1.length(), s2.length());
        // cout << n << ' ';
        if (mul(s1, n/s1.length()) == mul(s2, n/s2.length())) cout << mul(s2, n/s2.length()) << '\n';
        else cout << "-1\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
void stale_flippant() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
string solve(int n)
{
    if (n == 1) return "1";
    if (n == 2) return "2";
    if (n == 3) return "21";
    if (n == 4) return "121";
 
    int k = n/2;
    return solve(n-k) + solve(k);
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
 
        if (n==1) {
            cout << "1\n";
            continue;
        }
        if (n==2) {
            cout << "2\n";
            continue;
        }
 
        int c1 = 0, c2 = 0;
        bool s = true;
 
        while(n)
        {
            if (n==1) c1++, n--;
            else{
                if(s)
                    c2++, s=false, n-=2;
                else c1++, s=true, n--;
            }
        }
 
                // cout << c2 << ' ' << c1 << ' ';
        s = true;
        string ans = "";
        while (c1 and c2)
        {
            if (s) {
                ans += "2";
                c2--;
                s = false;
            } else {
                ans += "1";
                c1--;
                s = true;
            }
        }
 
    if (c1) {
        if (c1 == 2)
        ans = '1' + ans + '1';  
        else if (s)
        ans = '1' + ans;
        else 
        ans = ans + '1';
    }
    else ans += '2';
        
    cout << ans << '\n';
    }
 
 
    
    return 0;
}
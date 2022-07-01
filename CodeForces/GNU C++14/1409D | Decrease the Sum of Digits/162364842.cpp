#include <bits/stdc++.h>
 
 
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
 
#define ll long long
#define vi vector<ll>
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
ll rev_Int (ll Num){
 
    ll remainder, Rev = 0;    
 
    while (Num > 0){
 
        remainder = Num %10;
 
        Rev = Rev *10+ remainder;
 
        Num = Num /10;
 
    }    
 
    return Rev;
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
 
    while(t--)
    {
        int s;
        string n;
 
        cin >> n >> s;
 
 
 
        int count = 0;
 
        for (int i=0; i<n.size(); i++)
        {
            count += n[i] - '0';
        }
 
        if (count <= s)
        {
            cout << "0\n"; continue;
        }
 
        count = 0;
        while(n.size() and (count + (n[0] - '0')) < s)
        {
            count += n[0] - '0';
            n = n.substr(1);
        }
 
        long long ans = 0;
 
        for (int i=0; i<n.size(); i++)
        {
            // ans += ('9' - n[i] + 1);
            ans *= 10;
            ans += max(((10 - (n[i] - '0') - 1) % 10), 0);
 
        }
 
        cout <<  ans + 1 << '\n';
       
    }
 
    return 0;
}
 
 
 
 
 
 
 
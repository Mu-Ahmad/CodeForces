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
 
void solve(const string& number)
{   
    vector <int> digits;
    for (char digit : number)   
    {
        // cout << (digit  - '0') << '\n';
        digits.push_back(digit - '0');
    }
 
    for (int i = digits.size() -1; i>=1; i--)
    {
        if (digits[i] + digits[i-1] >= 10)
        {
            digits[i-1] += digits[i];
            digits.erase(digits.begin()+i);
            for (int i=0; i<digits.size(); i++)
                cout << digits[i];
            cout << '\n';
            return;
        }
    }
 
    int idx = digits.size();
    digits[1] += digits[0];
 
    for (int i=1; i<digits.size(); i++)
        cout << digits[i];
    cout << '\n';
 
    return;
}
 
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {
       
       string num; cin >> num;
       solve(num);
        
    }
    
    return 0;
}
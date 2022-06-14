#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pii>
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
string str, target;
 
bool solve(int curr, string result, bool toRight)
{
    result += str[curr];
    // cout << result << '\n';
    if (result[result.size()-1] != target[result.size()-1]) return false;
    if (result == target) return true;
    if (result.size() > target.size()) return false;
 
 
    bool ans = false;
    if(curr<str.size()-1 and toRight){
        ans |= solve(curr+1, result, true);
    }
 
    if(curr > 0)
        ans |= solve(curr-1, result, false);
 
    return ans;
}
 
int main()
{   
    stale_flippant();
    int t; cin >> t;
    while(t--)
    {
        cin >> str >> target;
 
        bool flag = false;
        for (int i=0; i<str.size() and !flag; i++)
            if (str[i] == target[0]) flag |= solve(i, "", true);
 
        cout << (flag ? "YES" : "NO") << '\n';
        
    }
 
    return 0;
}
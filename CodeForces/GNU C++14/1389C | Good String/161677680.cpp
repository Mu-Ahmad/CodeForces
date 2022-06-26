#include <bits/stdc++.h>
 
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
    {
        len++;
        swap(i, j);
    }
 
    if (i != j and len & 1) len--;
    
    return len;
}
 
int main()
{   
    stale_flippant();
    int t; cin >>t;
 
    while(t--)
    {
        string str; cin >> str;
 
        int len = 0;
        for (int i=0; i<10; i++) for (int j=0; j<10; j++)
            len = max(len, solve(str, i, j));
 
        cout << str.size() - len << '\n';
    }
 
    return 0;
}
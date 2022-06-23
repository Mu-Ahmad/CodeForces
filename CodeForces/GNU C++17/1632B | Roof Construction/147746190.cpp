#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
int main()
{
    int t; cin >> t;
    string s1, s2;
    while (t--)
    {
        int n; cin >> n;
 
        int k = __lg(n-1);
 
        for (int i= (1<<k) - 1; i>=0; i--)
            cout << i << ' ';
 
 
        for (int i= (1<<k); i<n; i++)
            cout << i << ' ';
 
        cout << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t; cin >> t;
 
    while (t--)
    {
        int n; cin >> n; 
        string str; cin >> str;
        if (is_sorted(str.begin(), str.end())) {puts("0"); continue;}   
 
        string original_str = str;
 
        sort(str.begin(), str.end());
 
        string ans = "";
        int si = 0;
        for (int i=0; i<n; i++)
            if (str[i] != original_str[i]) ans += to_string(i+1) + " ", si++;
 
        cout <<  "1\n" << si << ' ' << ans << '\n';
    }
    return 0;
}
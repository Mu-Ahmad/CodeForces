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
 
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
 
    while(t--)
    {
       int n;
       cin >> n;
       string s;
       cin >> s;
 
       bool possible = true;
       int x = count(s.begin(), s.end(), 'M');
       if (!((n%3 == 0) and (x == n/3))){
        puts("NO"); continue;
       }
       vector<int> first, second, middle;
       int i = 0;
       while(first.size() != n/3){
            if (s[i] == 'T') first.push_back(i);
            i++;
       }
 
        i = n-1;
        while(second.size() != n/3){
            if (s[i] == 'T') second.push_back(i);
            i--;
        }
 
        reverse(second.begin(), second.end());
 
        for (int i=0; i<n; i++)  if (s[i] == 'M') 
            middle.push_back(i);
 
        // cout << first.size() << ' '
        //      << middle.size() << ' '
        //      << second.size() << '\n';
        for (int i=0; i<first.size(); i++){
            // cout << first[i] << ' ' << middle[i] << ' ' << second[i] << '\n';
            if (first[i] > middle[i] or second[i] < middle[i]) 
                possible = false;
        }
       
       // for (int i=0)
       // cout << x << ' ' << n/3 << '\n';
       puts(((possible)?"YES":"NO"));
       
    }
 
 
    
    return 0;
}
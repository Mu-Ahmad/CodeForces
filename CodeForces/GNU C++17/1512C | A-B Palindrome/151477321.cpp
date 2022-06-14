#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define maxSize 3000005
 
using namespace std;
 
 
void stale_flippant() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int Count1, Count0;
string ans;
 
bool solve(string s, int r, int l, int count0, int count1)
{
    if (count(s.begin(), s.end(), '0') > Count0 or count(s.begin(), s.end(), '1') > Count1) return false;
    // cout << s << '\n';
    if (r>l) 
    {
        ans = s;
        return true;
    }
 
    bool solved = false;
    if (s[r] == '?' and s[l] == '?')
    {   
        if (count0 + (r==l) >1)
        {
            s[r] = s[l] = '0';
            solved |= solve(s, r+1, l-1, count0-2, count1);
        }
        if (!solved and count1 +  (r==l) >1)
        {
            s[r] = s[l] = '1';
            solved |= solve(s, r+1, l-1, count0, count1-2);
        }
    } 
    else if (s[r] == '?')
    {   
        s[r] = s[l];
        if (s[l] == '1' and count1) 
            solved |= solve(s, r+1, l-1, count0, count1-1);
        else if (count0)
            solved |= solve(s, r+1, l-1, count0-1, count1);
    } 
    else if (s[l] == '?')
    {
        s[l] = s[r];
        if (s[r] == '1' and count1) 
            solved |= solve(s, r+1, l-1, count0, count1-1);
        else if (count0)
            solved |= solve(s, r+1, l-1, count0-1, count1);
    } else if (s[r] == s[l]) solved |= solve(s, r+1, l-1, count0, count1);
    
    return solved;
 
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {
        cin >> Count0 >> Count1;
        string s; cin >> s;
        // cout << s << '\n';
        bool wrong = false;
        int l = 0, r = s.size() - 1, missing = 0;
        while(l<r)
        {
            if (s[r] == '?' and s[l] == '?') missing++;
            else if (s[r] == '?') s[r] = s[l];
            else if (s[l] == '?') s[l] = s[r];
            if (s[l] != s[r]){wrong = true; break;}
            l++, r--;
        }
        // cout << s << '\n';
        if (wrong or count(s.begin(), s.end(), '0') > Count0 or count(s.begin(), s.end(), '1') > Count1) 
        {
            cout << "-1\n";
            continue; 
        }
 
        Count0 -= count(s.begin(), s.end(), '0');
        Count1 -= count(s.begin(), s.end(), '1');
 
        l = 0, r = s.size()-1;
        while(l<r)
        {
            if (s[r] == '?' and s[l] == '?')
            {
                if (Count0 > 1) 
                {
                    s[r] = s[l] = '0';
                    Count0 -= 2;
                } 
                else if (Count1 > 1) 
                {
                    s[r] = s[l] = '1';
                    Count1 -= 2;
                }
                else {wrong = true; break;}
            }
            l++, r--;
        }
 
        if (s.size() & 1)
        {
            int mid = s.size() / 2;
            if (s[mid] == '?' )
            {
                if (Count0) s[mid] = '0';
                else if (Count1) s[mid] = '1';
                else wrong = true;
            }
        }
 
        if (wrong) cout << "-1\n";
        else cout << s << '\n';
    }
    return 0;
}
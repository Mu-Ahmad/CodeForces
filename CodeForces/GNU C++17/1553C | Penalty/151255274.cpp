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
 
int solve(string s, vector<int> score, int curr)
{   
    if (s == "") return 10;
    if (curr == 0) {
        if (abs(score[0] - score[1]) > s.size() / 2) return 10 - s.size();
    } else {
        int chance1 = s.size() / 2;
        int chance2 = chance1 + 1;
 
        if (score[0] + chance1 < score[1]) return 10 - s.size();
        if (score[1] + chance2 < score[0]) return 10 - s.size();
    }
 
    if (s[0] == '0') return solve(s.substr(1), score, curr^1);
    else if (s[0] == '1') {
        score[curr]++;
        return solve(s.substr(1), score, curr^1);
    } else {
        int score1 = solve(s.substr(1), score, curr^1);
        score[curr]++;
        int score2 = solve(s.substr(1), score, curr^1);
        return min(score1, score2);
    }
}
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        cout << solve(s, {0, 0}, 0) << '\n';
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
vector <int> visited;
 
bool dfs(vector < vector< pair<int, int> > >& adj_list, int curr, vector<int>& ans, int e_no, int val)
{   
    // cout << curr << endl;
    visited[curr] = true;
    if (adj_list[curr].size() > 2) return false;
    ans[e_no] = val;
    val = (val == 3) ? 2 : 3;
 
    bool flag = true;
    for (int i=0; i<adj_list[curr].size(); i++) if (!visited[adj_list[curr][i].first])
        flag &= dfs(adj_list, adj_list[curr][i].first, ans, adj_list[curr][i].second, val);
 
    return flag;
}
 
int main() {
    stale_flippant();
    int t; cin >> t;
 
    while(t--)
    {
        int n; cin >> n;
        vector < vector< pair<int, int> > > adj_list(n+1);
 
        int a, b;
        int idx = 0;
        n--;
        while(n--)
        {
            cin >> a >> b;
            adj_list[a].push_back({b, idx});
            adj_list[b].push_back({a, idx++});
        }
 
        int curr = -1;
        for(int i=1; i<=idx; i++) if (adj_list[i].size() == 1) {curr = i; break;}
 
        if (curr == -1) {cout << curr << '\n'; continue;}
 
        vector<int> ans(idx);
        visited = vector<int>(idx+5, false);
        bool flag = dfs(adj_list, curr, ans, adj_list[curr][0].second, 2);
        if (flag)
        {
            for (auto x : ans) cout << x << ' ';
        } else cout << "-1";
        cout << '\n';
    }
 
    return 0;
    
}
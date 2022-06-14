#include <bits/stdc++.h>
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
using namespace std;
 
 
int main() {
    int t;
    scanf("%d", &t);
    forn(_, t){
        int n;
        scanf("%d", &n);
        vector<int> s(n), u(n);
        forn(i, n){
            scanf("%d", &s[i]);
            --s[i];
        }
        forn(i, n){
            scanf("%d", &u[i]);
        }
        vector<vector<int>> bst(n);
        forn(i, n) bst[s[i]].push_back(u[i]);
        forn(i, n) sort(bst[i].begin(), bst[i].end(), greater<int>());
        vector<vector<long long>> pr(n, vector<long long>(1, 0));
        forn(i, n) for (int x : bst[i]) pr[i].push_back(pr[i].back() + x);
        vector<long long> ans(n);
        forn(i, n) for (int k = 1; k <= int(bst[i].size()); ++k)
            ans[k - 1] += pr[i][bst[i].size() / k * k];
        forn(i, n)
            printf("%lld ", ans[i]);
        puts("");
    }
    return 0;
}
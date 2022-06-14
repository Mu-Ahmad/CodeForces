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
 
int main()
{   
    stale_flippant();
    int t; cin >> t;
    while(t--)
    {
        int n, num; cin >> n;
        vi arr;
        vector<bool> present(n+1, false);
        for (int i=0; i<n; i++)
        {
            cin >> num;
            if (num <= n and present[num] == false)
                present[num] = true;
            else arr.push_back(num);
        }
 
        sort(arr.begin(), arr.end(), greater<int>());
 
        int ans = 0;
        bool flag = false;
        for (int i = 1; i<=n; i++)
            if (present[i] == false)
                if (i + i < arr[arr.size()-1])
                {
                    arr.pop_back();
                    ans++;
                }
                else
                {
                    flag = true;
                    break;
                }
            
        if (flag) cout << "-1\n";
        else cout << ans << '\n';
    }    
    return 0;
}
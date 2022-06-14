#include <bits/stdc++.h>
#define mod 1000000007
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
        int n; cin >> n;
        vector<ll> even = {INT_MIN}, odd = {INT_MIN};
        ll temp;
        for (int i=0; i<n; i++)
        {
            cin >> temp;
            if (temp&1) odd.push_back(temp);
            else even.push_back(temp);
        }
 
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
 
        ll score[2] = {0ll, 0ll};
        bool aliceTurn = true;
        for (int i=0; i<n; i++)
        {
            if (*(even.end() - 1) > *(odd.end() - 1)) 
            {
                if (aliceTurn) score[aliceTurn] += *(even.end() - 1);
                even.pop_back();
            } else 
            {
                if (!aliceTurn) score[aliceTurn] += *(odd.end() - 1);
                odd.pop_back();
            }
            aliceTurn ^= 1;
        }
        // cout << score[0] << ' ' << score[1] << '\n';
        if (score[0] == score[1]) cout << "Tie\n";
        else if (score[0] > score[1]) cout << "Bob\n";
        else cout << "Alice\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
 
#define ll long long
#define vi vector<ll>
 
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
        int n; cin >> n;
        vi arr(n), seq(n+1), seq2;
        iota(seq.begin(), seq.end(), 0); seq[0] = -1;
        for (int i=0; i<n; i++) cin >> arr[i];
        vi max_solution(n, -1), min_solution(n, -1);
        int max_val = -1;
        int curr = 1;
        for (int i=0; i<n; i++)
        {
            if (arr[i] > max_val)
            {
                max_val = arr[i];
                seq[arr[i]] = -1;
                max_solution[i] = min_solution[i] = arr[i];
                while(curr!=max_val) seq2.push_back(curr++); curr++;
            } else
            {
                max_solution[i] = *seq2.rbegin();
                seq2.pop_back();
            }
        }
 
        auto it = seq.begin();
        for (int i=0; i<n; i++) if (min_solution[i] == -1) 
        {   
            while (*it == -1) it++;
            min_solution[i] = *it;
            it++; 
        }
        
 
        for (int i=0; i<n; i++) cout << min_solution[i] << ' ';
            cout << '\n';
        for (int i=0; i<n; i++) cout << max_solution[i] << ' ';
            cout << '\n';
 
    }
 
    return 0;
}
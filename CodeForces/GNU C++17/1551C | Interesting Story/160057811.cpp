#include <bits/stdc++.h>
 
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
#define ll long long
#define pii pair<int, char>
#define vi vector <int>
 
using namespace std;
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
class node
{
public:
    int size = 0, left_path = 0, right_path = 0;
    node *left = NULL, *right = NULL;
    
};
 
 
 
int main()
{   
    stale_flippant();
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string strings[n];
        for (int i=0; i<n; i++)
            cin >> strings[i];
        
        vector<int> total_count(5, 0), a_count(5, 0);
        vector<vi> other_count(5);
        for (int i=0; i<n; i++)
        {
            vector<int> count(5, -1*strings[i].length());
            for (auto ch : strings[i])
                count[ch - 'a']+=2;
 
            // for (int i=0; i<5; i++)
            //     cout << count[i] << ' ';
            // cout << '\n';
 
            for (int j=0; j<5; j++)
            {   
                if (count[j] > 0)
                {
                total_count[j] += count[j];
 
                a_count[j]++;
                }
            }
 
            for (int j=0; j<5; j++) if (count[j] < 1)
                other_count[j].push_back(-1*count[j]);
        }
 
        int final_ans = 0;
 
        // for (int i=0; i<5; i++)
        //         cout << total_count[i] << ' ';
        //     cout << endl;
 
        // for (int i=0; i<5; i++)
        //         cout << a_count[i] << ' ';
        //     cout << endl;
 
        for (int i=0; i<5; i++)
        {
            sort(other_count[i].begin(), other_count[i].end());
            // for (int j=0; j<other_count[i].size(); j++)
            //     cout << other_count[i][j] << ' ';
            // cout << endl;
            int ans = a_count[i];
            for(int j=0; j<other_count[i].size(); j++) if (other_count[i][j] < total_count[i])
            {
                ans++;
                total_count[i] -= other_count[i][j];
            } else break;
 
            final_ans = max(final_ans, ans);
        }
 
        cout << final_ans << '\n';
    }
    return 0;
}
 
 
 
 
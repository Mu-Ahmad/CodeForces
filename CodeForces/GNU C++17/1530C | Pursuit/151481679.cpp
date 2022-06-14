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
 
int main()
{   
    stale_flippant();
 
    int t; cin >> t;
    int count1, count0;
    while(t--)
    {
        int n; cin >> n;
        vector<int> my(n), his(n);
        for (int i=0; i<n; i++) cin >> my[i];
        for (int i=0; i<n; i++) cin >> his[i];
        sort(my.begin(), my.end());
        sort(his.begin(), his.end());
        ll hisScore = 0, myScore = 0;
        for (int i = n/4; i<n; i++)
        {
            hisScore += his[i];
            myScore += my[i];
        }
 
        int myIndex = n/4;
        int hisIndex = n/4 - 1;
        int k = n;
        my.push_back(100);
        while(myScore<hisScore)
        {
            // cout << hisScore << ' ' << myScore << '\n';
            myScore += 100;
            k++;
            // cout << k << '\n';
            if (k % 4 == 0)
            {
                myScore -= my[myIndex++];
                myIndex = min(myIndex, (int)my.size()-1);
            }
            else
            {
                if (hisIndex>=0) hisScore += his[hisIndex--];
            }
        }
 
        cout << k - n << '\n';
 
    }
    return 0;
}
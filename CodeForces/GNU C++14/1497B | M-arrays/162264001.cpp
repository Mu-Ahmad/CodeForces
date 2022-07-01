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
 
ll func(int i)
{
    int p = 2;
 
    while((i / p*p) != 0) 
        if ((i % (p*p)) == 0)
            i /= p*p;
        else
            p++;
 
    return (ll)i;
}
 
int main()
{   
    stale_flippant();
 
    int c, t; cin >> t;
 
 
    while(t--)
    {
        int n, m; cin >> n >> m;
        vi freq(m+5, 0);
 
        for(int i=0; i<n; i++)
        {
            cin >> c;
            freq[c%m]++;
        }
 
        int idx = 0;
        while(freq[idx] == 0) idx++;
        freq[idx]--;
        pair <int, int> head = {idx, idx};
 
        int count = 1;
        int k = n-1;
        while (k)
        {   
            while(freq[(m-head.second)%m])
            {   
                head.second = (m-head.second)%m;
                freq[head.second]--;
                k--;
            }
 
            while(freq[(m-head.first)%m])
            {
                head.first = (m-head.first)%m;
                freq[head.first]--;
                k--;
            }
 
            if (k)
            {
                while(freq[idx] == 0) idx++;
                head = {idx, idx};
                freq[idx]--;
                k--;
                count++;
            }
 
        }
 
        cout << count << '\n';
    }
 
    return 0;
}
 
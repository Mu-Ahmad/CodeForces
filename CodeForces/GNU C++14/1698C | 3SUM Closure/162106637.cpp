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
        vi arr(n);
        int zero_count = 0;
 
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0) zero_count++;
        }
 
        vi arr1(n-zero_count);
        int idx = 0;
        map <int, int> exists;
        if (n-zero_count > 98) cout << "NO\n";
        else
        {
            for (int i=0; i<n; i++) if (arr[i])
            {
                arr1[idx++] = arr[i];
                exists[arr[i]] = 1;
            }
 
            if (zero_count)
            {
                arr1.push_back(0);
                exists[0] = 1;
            }
            bool flag = true;
            for (int i=0; i<arr1.size(); i++)
                for (int j=i+1; j<arr1.size(); j++)
                    for (int k= j+1; k<arr1.size(); k++)
                    {   
                        // deb3(arr1[i], arr1[j], arr1[k]);
                        if (exists[arr1[i] + arr1[j] + arr1[k]]) continue;
                        flag = false;
                        break;
                    }
 
            cout << ((flag) ? "YES\n" : "NO\n");
        }
       
 
    }
 
    return 0;
}
 
 
 
 
 
 
 
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
    while(t--)
    {
        int n; cin >> n;
        map<double, int> frequency;
        vector<double> arr(n);
        double avg = 0, x;
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            avg += arr[i];
            frequency[arr[i]]++;
        }
        avg /= (double)n;
        ll ans = 0;
        // int count = 0;
        for (auto num : arr)
        {   
            double other = avg * 2 - num;
            int c = frequency[other];
            if (other == num) c--;
            ans += c; 
        }
        cout << ans / 2 << '\n';
    }
    return 0;
}
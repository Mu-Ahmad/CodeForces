#include <bits/stdc++.h>
 
using namespace std;
 
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
    int n; cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
 
    priority_queue<int, vector<int>, greater<int>> Q;
 
    long long running_sum = 0LL;
    int ans = n;
    for (int i=0; i<n; i++)
    {
        if (arr[i] < 0) Q.push(arr[i]);
 
        running_sum += (long long)arr[i];
 
        if (running_sum < 0) {
            running_sum -= Q.top(); Q.pop(); 
            ans--;
        }
    }
 
    cout << ans << "\n";
 
}
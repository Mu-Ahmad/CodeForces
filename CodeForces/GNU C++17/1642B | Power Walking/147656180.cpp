#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t; cin >> t;
 
    while(t--){
        int a, n; cin >> n;
        set<int> arr;
        for (int i=0; i<n; i++)
            cin >> a, arr.insert(a);
 
        int s = arr.size();
        for (int i=1; i<=n; i++) cout << max(i, s) << ' ';
        
        cout << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t; cin >> t;
 
    while(t--){
        int temp, n; cin >> n;
        map<int, int> arr;
        for (int i=0; i<n; i++){
            cin >> temp;
            arr[temp]++;
            // cout << temp << endl;
        }
 
        vector<int> powers;
        for (auto p: arr){
            powers.push_back(p.second);
        }
        int ans = 0;
        // cout << powers.size() << endl;
        // sort(powers.begin(), powers.end(), greater<int>());
        for (int i=0; i<n; i++){
            ans = max(i+1, (int)powers.size());
            cout << ans << ' ';
        }
        cout << '\n';
    }
    return 0;
}
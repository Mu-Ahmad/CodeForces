#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t; cin >> t;
 
    pair <int, int> p1, p2, p3;
    while(t--){
        cin >> p1.first >> p1.second
            >> p2.first >> p2.second
            >> p3.first >> p3.second;
        long long ans = 0;
        if (p1.second == p2.second and p1.second > p3.second) 
            ans = abs(p1.first - p2.first);
        if (p2.second == p3.second and p2.second > p1.second)
            ans = abs(p2.first - p3.first);
        if (p1.second == p3.second and p1.second > p2.second) 
            ans = abs(p1.first - p3.first);
 
 
        cout << ans << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t; cin >> t;
 
    while(t--){
        int n; cin >> n;
 
        if ((n % 2 == 0) and (int)sqrt(n/2) * (int)sqrt(n/2) == n / 2) cout << "YES\n";
        else if ((n % 4 == 0) and (int)sqrt(n/4) * (int)sqrt(n/4) == n / 4) cout << "YES\n";
        else cout << "NO\n";
     }
    return 0;
}
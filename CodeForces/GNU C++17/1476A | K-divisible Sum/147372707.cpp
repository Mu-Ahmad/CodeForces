#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t; cin >> t;
 
    while(t--){
        double n, k; cin >> n >> k;
        if (k>=n) {
         int ans = (int)ceil(k / n);
         printf("%d\n", ans);
         continue;
        }
        double factor = ceil(n / k);
 
        k *= factor;
        int ans = (int)ceil(k / n);
        printf("%d\n", ans);
    }
    return 0;
}
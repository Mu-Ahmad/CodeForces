#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t; cin >> t;
 
    while(t--){
        int n, a, b; cin >> n >> a >> b;
        string str; cin >> str;
 
 
        int m = 1;
        char prev = str[0];
        for (int i=1; i<str.length(); i++)
            if (prev != str[i]) {
                prev = str[i];
                m++;            
            }
 
        printf("%d\n", n*a + max(b*n, b* (m/2 + 1)));
    }
    return 0;
}
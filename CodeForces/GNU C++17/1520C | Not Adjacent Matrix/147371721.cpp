#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t; cin >> t;
 
    while(t--){
        int n; cin >> n;
        if (n==1) {
         puts("1");
         continue;
        }
        if (n==2) {
         puts("-1");
         continue;
        }
 
        int arr[n][n];
 
        int k = 1;
        for (int i=0; i<n; i++)
         for (int j=0; j<n; j++)
          if(!((i+j) & 1)) {
           // printf("%d %d\n", i, j);
           arr[i][j] = k++;
          }
 
        for (int i=0; i<n; i++)
         for (int j=0; j<n; j++)
          if((i+j) & 1) {
           // printf("%d %d\n", i, j);
           arr[i][j] = k++;
          }
 
        for (int i=0; i<n; i++){
         for (int j=0; j<n; j++)
          cout << arr[i][j] << ' ';
         cout << '\n';
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define vi vector <int>
 
using namespace std;
 
int main(){
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  int x = 0, temp;
  while(n--){
   cin >> temp;
   x |= temp;
  }
  printf("%d\n", x);
 }
}
 
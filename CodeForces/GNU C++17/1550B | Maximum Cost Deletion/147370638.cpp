#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 int t; cin >> t;
 
 while(t--){
  string str;
  int n, a, b; cin >> n >> a >> b >> str;
 
  int m = unique(str.begin(), str.end()) - str.begin();
 
  printf("%d\n", n*a + max(b*n, b * (m/2 + 1)));
 }
 return 0;
}
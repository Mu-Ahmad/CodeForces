#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 int t; cin >> t;
 while(t--){
  long long a, b; cin >> a >> b;
  if (b==1) puts("No");
  else {
   puts("Yes");
   printf("%lld %lld %lld\n", a, a*b, a*b + a);
  }
 }
 return 0;
}
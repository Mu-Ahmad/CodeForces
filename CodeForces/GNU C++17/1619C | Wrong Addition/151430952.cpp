#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int t; cin >> t;
 long long a, sum;
 string b;
    
    for (int i=1; i<=t; i++) {
        cin >> a >> sum;
  
  b = "";
  unsigned long long power = 1;
  bool possible = true;
  while (sum) {
   if (a % 10 > sum % 10) {
    int temp = sum % 100 - a % 10;
    a /= 10;
    sum /= 10;
    if (sum % 10 != 1) {
     possible = false;
     break;
    }
    sum /= 10;
    b  = (char)(temp + '0') + b;
   } else   {
    int temp = sum % 10 - a % 10;
    a /= 10;
    sum /= 10;
    b  = (char)(temp + '0') + b;
    // cout << b << '\n'; 
   }
  }
        
        istringstream in(b);
        long long ans; in >> ans;
  if (!possible or a) cout << "-1\n";
  else cout << ans << '\n';
 }
 
 return 0;
}
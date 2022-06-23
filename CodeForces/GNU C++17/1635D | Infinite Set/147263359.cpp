#include <bits/stdc++.h>
#define mod 1000000007
#define maxPower 200000
 
using namespace std;
 
int main(){
 int n, p;
 cin >> n >> p;
 vector <int> arr(n);
 while(n--) cin >> arr[n];
 
 
 sort(arr.begin(), arr.end());
 
 set <int> unique;
 
 for (auto x : arr){
  int _x = x;
  bool flag = false;
  while (_x) {
   if (unique.count(_x)) {
    flag = true;
    break;
   }
   if (_x & 1) _x >>= 1;
   else if (_x & 3) break;
   else _x >>= 2;
  }
 
  // cout << _x << '\n';
  if (flag == false) unique.insert(x);
 }
 
 int count[p+1] = {0};
 
 count[1] = unique.count(1);
 
 auto it = unique.begin();
 if (*it == 1) it++;
 int ans = count[1];
 for (int i=2; i<=p; i++) {
  (count[i] = count [i-1] + count [i-2]) %= mod;
  int val = 0;
  while(it != unique.end()){
   if (*it < (1 <<i )) {
    it++;
   }
   else break;
   val++;
  }
  
  (count[i] += val) %= mod;
  (ans += count[i]) %= mod;
  // cout << count[i] << ' ' << i << '\n'; 
 }
 
 cout << ans << '\n';
 
 
 return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
long long gcd(long long a,long long b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
 
long long nCr(int n, int r){
 long long a = 1, b = 1;
 
 // C(n, r) == C(n, n-r),
    // choosing the smaller value
 if (n-r < r)
  r = n - r;
 
 if (r == 0) return 1LL;
 
 while (r){
  a *= n;
  b *= r;
 
  long long m = gcd(a, b);
 
  a /= m;
  b /= m;
 
  n--; r--;
 }
 
 return a;
}
 
int main(){
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int t; cin >> t;
 int maxD = 0, _maxD;
 while(t--){
  int countOf[200005] = {0};
  int _countOf[200005] = {0};
  int n; cin >> n;
  int diff, temp;
  for (int i=0; i<n; i++){
   cin >> temp;
   diff = temp - i;
   // printf("%d\n",diff);
   if (diff>=0) {
    maxD = max(maxD, diff);
    countOf[diff]++;
   } else {
    _countOf[abs(diff)]++;
    _maxD = min(_maxD, diff);
   }
  }
 
  long long ans = 0;
  for (int i=0; i<=maxD; i++)
   if (countOf[i]>1) {
    // printf("%d %d\n",i, countOf[i]);
    ans += nCr(countOf[i], 2);
   }
 
  _maxD *= -1;
 
  for (int i=0; i<=_maxD; i++)
   if (_countOf[i]>1) {
    // printf("%d %d\n",i, countOf[i]);
    ans += nCr(_countOf[i], 2);
   }
  
  printf("%lld\n", ans);
  // puts("---------");
 }
  // printf("%lld\n", nCr(200005, 2));
 return 0;
}
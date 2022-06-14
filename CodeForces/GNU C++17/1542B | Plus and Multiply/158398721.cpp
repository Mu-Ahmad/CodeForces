#include <bits/stdc++.h>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
using namespace std;
 
void stale_flippant() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
int main() {
 stale_flippant();
 int t;  cin >> t;
 while (t--)
 {
  long long n, a, b;
  cin >> n >> a >> b;
  if (a == 1)
   cout << (((n - 1) % b == 0) ? "YES\n" : "NO\n");
  else
  {
   bool flag = false;
   long long k = 1;
   while (k <= n)
   {
    if (k % b == n % b)
    {
     flag = true;
     break;
    }
    k = k * a;
   }
   cout << (flag ? "YES\n" : "NO\n");
  }
 
 }
 
 return 0;
}
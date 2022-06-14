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
 int t; cin >> t;
 
 while (t--)
 {
  int n; cin >> n;
  if (n & 1 and n > 1) cout << "Ashishgup\n";
  else
  {
   bool found = n == 2;
   for (int i = 3; i * i <= n; i++)
    if (n % i == 0)
    {
     found = ((i & 1) or ((n / i) & 1));
     if (found) break;
    }
 
   cout << ((found) ? "Ashishgup\n" : "FastestFinger\n");
  }
 }
 
 return 0;
}
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
 
int n;
 
int main() {
 stale_flippant();
 int t; cin >> t;
 
 while (t--)
 {
  int n; cin >> n;
  double sum = 0;
  vector<double> arr(n, 0);
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
   sum += arr[i];
  }
 
 
  bool flag = false;
 
  for (int i = 0; i < n; i++)
  {
   // deb3(i, ((sum - arr[i]) / (n - 1)), arr[i] );
   if (((sum - arr[i]) / (n - 1))  == arr[i])
    flag = true;
  }
 
  cout << (flag ? "Yes\n" : "No\n");
 }
 
 return 0;
}
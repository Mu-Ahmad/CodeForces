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
 // your code goes here
 stale_flippant();
 int n, temp; cin >> n;
 vector<int> arr1(n);
 map <int, int>  arr2;
 
 for (int i = 0; i < n; i++)
  cin >> arr1[i];
 
 for (int i = 0; i < n; i++)
 {
  cin >> temp;
  arr2[temp] = i;
 }
 
 vector<int> ans(n + 2, 0);
 
 for (int i = 0; i < n; i++)
 {
  int dist = (((arr2[arr1[i]] - i) % n) + n) % n;
  // deb3(arr1[i], i, arr2[arr1[i]]);
  // cout << dist << '\n';
  ans[dist]++;
 
 }
 
 cout << *max_element(ans.begin(), ans.end()) << '\n';
 
 return 0;
}
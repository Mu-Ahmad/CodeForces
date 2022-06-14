#include <bits/stdc++.h>
 
using namespace std;
 
void stale_flippant() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
 
int main()
{
 stale_flippant();
 int t; cin >> t;
 while (t--)
 {
  int n, k; cin >> n >> k;
  string str; cin >> str;
  map<char, int> freq;
  for (auto ch : str)
   freq[ch]++;
 
  int twos = 0, ones = 0;
 
  for (auto p : freq)
  {
   twos += p.second / 2;
   ones += p.second & 1;
  }
 
  long long ans = ((twos - (twos % k)) / k) * 2;
  ones += (twos % k) * 2;
 
  // cout << twos << ' ' << ones << ' ' << ans << ' ';
  cout << ans + (ones >= k) << '\n';
 }
 
 return 0;
}
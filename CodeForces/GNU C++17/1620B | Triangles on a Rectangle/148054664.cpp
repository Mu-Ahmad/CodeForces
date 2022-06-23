#include <bits/stdc++.h>
#define ll long long
 
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
  int w, h, k;
  ll temp;
  cin >> w >> h;
  vector<vector<ll>> sides(4);
  for (int i = 0; i < 4; i++)
  {
   cin >> k;
   while (k--)
   {
    cin >> temp;
    sides[i].push_back(temp);
   }
  }
 
  ll ans;
  ans = (sides[0][sides[0].size() - 1] - sides[0][0]) * h;
  ans = max(ans, (sides[1][sides[1].size() - 1] - sides[1][0]) * h);
  ans = max(ans, (sides[2][sides[2].size() - 1] - sides[2][0]) * w);
  ans = max(ans, (sides[3][sides[3].size() - 1] - sides[3][0]) * w);
 
  cout << ans << '\n';
 }
}
#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
using namespace std;
// #define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
void stale_flippant() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
//returns first i in l - r that returns the predicate true, never evaluates r
template<typename P, typename I> I BinarySearch(const P& predicate, I l, I r)
{
 l--;
 while (r - l > 1)
 {
  auto mid = (l+r) / 2;
  if (predicate(mid)) r = mid;
  else l = mid;
 }
 
 return r;
}
 
int main()
{ 
 stale_flippant();
 int t; cin >> t;
 while(t--)
 {
  // cout << t << endl;
  int n; cin >> n;
  // cout << n << endl;
  auto tooBig = [&] (ll i)
  {
   ll a = 2*i + 1;
   return (a*a)/ 2 + 1 > n; 
  };
 
  cout << BinarySearch(tooBig, 0LL, (ll)1e9) - 1 << endl;
 }
 
 return 0;
}
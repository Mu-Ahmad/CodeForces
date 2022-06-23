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
 int t, temp; cin >> t;
 while (t--)
 {
  int n; cin >> n;
  vector< pair<int, int> > arr(n);
 
  for (int i = 0; i < n; i++)
  {
   cin >> temp;
   arr[i] = {temp, i};
  }
 
  sort(arr.begin(), arr.end(), greater< pair<int, int> >());
 
  long long k = 1;
  long long ans = 0;
  int idx1 = n / 2, idx2 = n / 2;
  int final_arr[n];
 
  for (int i = 0; i < n; i++)
  {
   ans += 2 * k * arr[i].first;
   final_arr[arr[i].second] = ++idx1;
   i++;
   if (i < n)
   {
    ans += 2 * k * arr[i].first;
    final_arr[arr[i].second] = --idx2;
   }
   k++;
  }
 
  cout << ans << endl << n / 2;
  for (int i = 0; i < n; i++)
   cout << ' ' << final_arr[i];
  cout << endl;
 }
 return 0;
}
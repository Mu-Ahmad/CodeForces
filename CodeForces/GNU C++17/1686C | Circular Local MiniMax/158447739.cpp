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
 
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
 
  if (n & 1) cout << "NO\n";
  else
  {
   vector <int> ans;
   sort(arr.begin(), arr.end());
   auto itr = arr.begin();
   auto itr2 = itr + n / 2;
 
   bool flag = true;
   while (itr2 != arr.end())
   {
    if (*itr >= *itr2)
    {
     flag = false;
     break;
    }
 
    if (ans.size() and ans.back() == *itr)
    {
     // deb3(ans.back(), *itr, *itr2);
     flag = false;
     break;
    }
 
    ans.push_back(*itr);
    ans.push_back(*itr2);
    itr++;
    itr2++;
   }
 
   if (flag)
   {
    cout << "YES\n";
    for (auto n : ans)
     cout << n << ' ';
    cout << '\n';
   } else cout << "NO\n";
  }
 }
 
 return 0;
}
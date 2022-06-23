#include <bits/stdc++.h>
#define vi vector <int>
 
using namespace std;
 
int main(){
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  int temp, ans = 0;
  vi arr(n+1);
  for(int i=0; i<n; i++) 
   cin >> arr[i];
  arr[n] = INT_MIN;
  for(int i=1; i<n-1; i++) 
   if (arr[i]>arr[i-1] and arr[i]>arr[i+1]){
    ans++;
    // printf("%d\n", i);
    arr[i+1] = max(arr[i], arr[i+2]);
   }
 
  printf("%d\n", ans);
  arr.pop_back();
  for (auto& x : arr)
   printf("%d ", x);
  puts("");
 }
}
 
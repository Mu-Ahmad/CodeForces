#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  int arr[n];
  for (int i=0; i<n; i++) cin >> arr[i];
 
  int a = 1, b = 1;
 
  for (int i=0; i<n; i++){
   if (i+1 < arr[i]){
    int temp = arr[i];
    for (int j=i+1; j<n; j++)
     if (arr[j]<temp) {
      temp = arr[j];
      b = j;
     }
    a = i;
    break;
   }
  }
 
  // printf("%d %d\n", a, b);
  while (a<b){
   swap(arr[a++], arr[b--]);
  }
 
  for (int i=0; i<n; i++)
   cout << arr[i] << ' ';
  puts("");
 }
 return 0;
}
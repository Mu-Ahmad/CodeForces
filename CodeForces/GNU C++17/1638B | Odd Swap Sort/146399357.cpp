#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  int arr[n];
  for (int i=0; i<n; i++) cin >> arr[i];
 
  bool possible = true;
 
  int maxEven = 0, maxOdd = 0;
 
  for (int i=0; i<n; i++) {
   if (arr[i] & 1) {
    if (arr[i] < maxOdd){
     // printf("%d %d\n", arr[i], maxOdd);
     // puts("here");
     possible = false;
     break;
    }
    maxOdd = arr[i];
   } else {
    if (arr[i] < maxEven){
     // printf("%d %d\n", arr[i], maxEven);
     // puts("There");
     possible = false;
     break;
    }
    maxEven = arr[i];
   }
  }
 
 
  puts(possible ? "YES" : "NO");
 }
 return 0;
}
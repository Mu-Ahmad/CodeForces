#include <bits/stdc++.h>
#define vi vector <int>
#define vll vector <long long>
 
using namespace std;
 
int main(){
 int t; cin >> t;
 while(t--){
  // printf("%d\n", t);
  int n; cin >> n;
  int temp;
  vll arr(n);
  vector <vi> ans;
  for(int i=0; i<n; i++) 
   cin >> arr[i];
 
  bool flag = true;
  for (int i=0; i<n-1; i++)
   if (arr[i]>arr[i+1]) flag = false;
 
  if (flag) {
   puts("0"); continue;
  }
 
  if (arr[n-1] < arr[n-2] or arr[n-1]<0) printf("-1\n");
  else {
   printf("%d\n", n-2);
   for (int i=1;i<n-1; i++)
    printf("%d %d %d\n", i, n-1, n);
  }
  
 }
}
 
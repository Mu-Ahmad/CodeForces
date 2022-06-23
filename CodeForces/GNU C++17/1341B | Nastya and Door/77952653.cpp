#include <iostream>
using namespace std;
 
 
int main(){
 int t, n, k;
 int arr[200005]= {0};
 cin >> t;
 while(t--){
  cin >> n >> k;
  for(int i=0; i<=n-1; i++){
   cin >> arr[i];
  }
  int peaks=0;
  int index=1;
  for(int i=1; i<k-1; i++){
   //cout<<arr[i]<<' ';
   if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
    peaks++;
   }
  }
  int max_peaks=peaks;
  //cout << peaks << ' ';
  for(int i=1; k<n; i++, k++){
   //cout << arr[k-1] << ' ';
   if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
    peaks--;
   }
 
   if(arr[k-1]>arr[k-2] and arr[k-1]>arr[k]){
    peaks++;
   }
 
   if(peaks>max_peaks){
    max_peaks=peaks;
    index = i+1;
   }
   //cout << peaks << ' ';
  }
  max_peaks++;
  cout << max_peaks <<' ' << index << endl;
 }
}
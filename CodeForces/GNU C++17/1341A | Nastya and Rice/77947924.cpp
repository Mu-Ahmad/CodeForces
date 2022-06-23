#include <iostream>
using namespace std;
 
int main(){
 int t, a, b, n, c, d, weight;
 cin >> t;
 while(t--){
  cin >> n >> a >> b >> c >> d;
  int minWeight, maxWeight;
  minWeight = a-b;
  maxWeight = a+b;
  int maxpWeight, minpWeight;
  minpWeight = c-d;
  maxpWeight = c+d;
  // cout << "minWeight: " << n*minWeight << " maxpWeight: " << maxpWeight << endl;
  // cout << "maxWeight: " << n*maxWeight << " minpWeight: " << minpWeight << endl;
  if(n*maxWeight<minpWeight || n*minWeight>maxpWeight) {
   cout << "No" << endl;
   continue;
  }
  cout << "Yes" << endl; 
 }
 return 0;
}
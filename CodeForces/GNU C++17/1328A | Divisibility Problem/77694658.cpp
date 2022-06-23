#include <iostream>
using namespace std;
 
int main(){
 int t;
 cin >> t;
 for(int i=0; i<t; i++){
  int a, b;
  cin >> a >> b;
  int rem = a%b;
  if(rem)
   cout << b-rem << endl;
  else
   cout << 0 << endl;
 }
 return 0;
}
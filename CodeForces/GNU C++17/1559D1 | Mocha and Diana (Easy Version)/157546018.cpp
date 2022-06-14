#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
 
using namespace std;
 
int getroot(int val, vector<int>& root)
{
 if (root[val] ==  val) return val;
 
 return root[val] =  getroot(root[val], root);
}
 
 
int main() {
 // your code goes here
 
 int n, e1, e2; cin >>  n >> e1 >> e2;
 int _e1 = e1, _e2 = e2;
 cout <<  n - max(e1, e2) - 1 << '\n';
 
 vector<int> root1(n+1);
 iota(root1.begin(), root1.end(), 0);
 
 vector<int> root2(n+1);
 iota(root2.begin(), root2.end(), 0);
 
 int from, to;
 while(_e1--)
 {
  cin >> from >> to;
  
  int a = getroot(from, root1);
  int b = getroot(to, root1);
 
  root1[a] = b;
  
  // for (auto a : root1) cout << a << ' ';
  
  // cout << '\n';
 }
 
 while(_e2--)
 {
  cin >> from >> to;
  
  int a = getroot(from, root2);
  int b = getroot(to, root2);
 
  root2[a] = b;
  
  // for (auto a : root2) cout << a << ' ';
  
  // cout << '\n';
 }
 
 auto main = (e1 > e2) ? root1 : root2;
 auto other = (e1 > e2) ? root2 : root1;
 
 for (int i=1; i<=n; i++)
  for (int j=i+1; j<=n; j++)
  {
   int mainA = getroot(i, main);
   int mainB = getroot(j, main);
   // cout << mainA << ' ' << mainB << '\n';
   if (mainA != mainB)
   {
    int otherA = getroot(i, other);
    int otherB = getroot(j, other);
    // cout << otherA << ' ' << otherB << '\n';
    
    if (otherA != otherB)
    {
     cout << i << ' ' << j << '\n';
     other[otherA] = otherB;
     main[mainA] = mainB;
    }
   }
  }
 
 return 0;
}
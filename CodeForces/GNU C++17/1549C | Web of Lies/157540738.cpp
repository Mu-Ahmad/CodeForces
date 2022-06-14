#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
 
using namespace std;
 
int main() {
 // your code goes here
 int n, m;
 
 cin >> n >> m;
 
 vector <set<int> > adj_list(n+1);
 
 int from, to;
 
  vector <int> alive(n+1, true);
 int total = n;
 
 for (int i=0; i<m; i++)
 {
  cin >> from >> to;
  
  adj_list[min(from, to)].insert(max(from, to));
  
  if (alive[min(from, to)])
    {
     alive[min(from, to)] = false;
     total--;
     // cout << "Now Removing " <<  min(from, to) << " " << total  << '\n';
    }
 
 }
 
 
 
 
 int q; cin >> q;
 
 while(q--)
 {
  int c; cin >> c;
  switch(c)
  {
   case 1: 
    cin >> from >> to;
    adj_list[min(from, to)].insert(max(from, to));
    if (alive[min(from, to)])
    {
     alive[min(from, to)] = false;
     // cout << "Now Removing " <<  min(from, to) << " " << total  << '\n';
     total--;
     // cout << "Now Removing " <<  min(from, to) << " " << total  << '\n';
    }
    break;
   case 2:
    cin >> from >> to;
    adj_list[min(from, to)].erase(adj_list[min(from, to)].find(max(from, to)));
    if (adj_list[min(from, to)].size() and *(--adj_list[min(from, to)].end()) < min(from, to) or adj_list[min(from, to)].size() == 0)
    { 
     alive[min(from, to)] = true;
     total++;
     // cout << "Now Adding " <<  min(from, to) << " " << total  << '\n';
    }
 
    break;
   case 3:
   { 
    cout << total << '\n';
    break;
   }
    
   }
 }
  
 
 return 0;
}
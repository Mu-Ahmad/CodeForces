#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 int t; cin >> t;
 while (t--)
 {
  string str;
  cin >> str;
  if (str.length() & 1 or str[0] == ')' or * (str.end() - 1) == '(')
   puts("NO");
  else
   puts("YES");
 }
 return 0;
}
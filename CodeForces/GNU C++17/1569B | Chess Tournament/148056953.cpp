#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 int t; cin >> t;
 while (t--)
 {
  int n; cin >> n;
  vector< vector<char> > matrix(n, vector<char>(n, 'a'));
  string req; cin >> req;
  for (int i = 0; i < n; i++)
   if (req[i] == '1')
    for (int j = 0; j < n; j++)
     matrix[i][j] = matrix[j][i] = '=';
 
  for (int i = 0; i < n; i++)
   matrix[i][i] = 'X';
 
  bool possible = true;
  for (int i = 0; i < n; i++)
   if (req[i] == '2')
   {
    bool satisfied = false;
    for (int j = 0; j < n; j++)
     if (matrix[i][j] == 'a')
     {
      matrix[i][j] = '+', matrix[j][i] = '-';
      satisfied = true;
      break;
     }
    if (!satisfied)
    {
     possible = false;
     break;
    }
   }
 
  for (int i = 0; i < n; i++)
   for (int j = 0; j < n; j++)
    if (matrix[i][j] == 'a') matrix[i][j] = '=';
 
  if (!possible) cout << "NO\n";
  else
  {
   cout << "Yes\n";
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < n; j++)
     cout << matrix[i][j];
    cout << '\n';
   }
  }
 }
 return 0;
}
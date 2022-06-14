#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
 
 
#define ll long long
using namespace std;
 
bool solve()
{
    return true;
}
 
ll gcd(ll a,ll b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        map<pair<int, int>, int> occ;
        int n; cin >> n;
        string str; cin >> str;
        int d = 0, k = 0;
        for (auto ch : str) {
            if (ch == 'D') d++;
            else k++;
 
            int x = gcd(d, k);
            int _d = d/x;
            int _k = k/x;
 
            occ[{_d, _k}]++;
            cout << occ[{_d, _k}] << ' ';
        } 
        cout << '\n';
    }
    return 0;
}
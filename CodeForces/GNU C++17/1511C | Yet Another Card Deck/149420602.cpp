#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
void stale_flippant() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
int main()
{   
    stale_flippant();
 
    int x, n, q; cin >> n >> q;
    list<int> arr(n, 0);
 
    for (auto& val : arr) cin >> val;
 
 
    while(q--)
    {   
        cin >> x;
        auto it = arr.begin();
        int pos = 1;
        while(*it != x) it++, pos++;
        cout << pos << ' ';
        arr.erase(it);
        arr.push_front(x);
    }
    
    return 0;
}
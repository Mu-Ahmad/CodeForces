#include <iostream>
 
using namespace std;
 
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
int main()
{   
    stale_flippant();
    
    int t; cin >> t;
    while(t--)
    {
        long long n, s;
        cin >> n >> s;
        long long k = s / (n*n);
        printf("%d\n", k);
    }
    return 0;
}
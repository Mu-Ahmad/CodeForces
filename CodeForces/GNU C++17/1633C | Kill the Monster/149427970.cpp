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
 
    int t ; cin >> t;
 
 
    while(t--)
    {   
        long long p_health, p_strike, e_health, e_strike;
        cin >> p_health >> p_strike >> e_health >> e_strike;
        long long c, h_up, s_up;
        cin >> c >> s_up >> h_up;
        bool possible = false;
 
        for (long long i=0; i<=c; i++)
        {
            long long p_strike_ = p_strike + i*s_up;
            long long p_health_ = p_health + (c-i)*h_up;
            long long Ineed = ceil((double)e_health / p_strike_);
            long long Heneed = ceil((double)p_health_ / e_strike);
            if (Ineed<=Heneed) {puts("YES"); possible = true; break;}
        }
 
        if (!possible) puts("NO");
        
        // cout << '\n';
    }
    
    return 0;
}
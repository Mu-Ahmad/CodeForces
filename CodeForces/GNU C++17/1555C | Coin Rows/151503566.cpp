#include<bits/stdc++.h>
using namespace std;
 
#define fi                  first
#define se                  second
#define ll                  long long
#define pb                  push_back
#define mp                  make_pair
#define pqb                 priority_queue<int>
#define pqs                 priority_queue<int,vi,greater<int> >
#define setbits(x)          __builtin_popcountll(x)
#define zrobits(x)          __builtin_ctzll(x)
#define mod                 1000000007
#define inf                 1e18
#define deb(x)              cout<< #x << ' ' << x << endl
#define deb2(x, y)          cout<< #x << ' ' << x <<' '<< #y << ' ' << y << endl
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
#define ps(x,y)             fixed<<setprecision(y)<<x
#define reset(a, b)         memset(a, b, sizeof(a))
#define w(x)                int x; cin>>x; while(x--)
#define finc(s, e, k)       for(int i=s; i<e; i+=k)
#define f(s, e)             finc(s, e, 1)
#define frange(x)           finc(0, x, 1)
#define repeat(x)           frange(x)
#define all(cont)           cont.begin(), cont.end()
#define rall(cont)          cont.end(), cont.begin()
#define mk(arr,n,type)                  type *arr=new type[n];
#define copyArray(src, des, n, type)    type des[n]; frange(n){des[i] = src[i];}
//================================
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;
//=================================
mt19937                                 rng(chrono::steady_clock::now().time_since_epoch().count());
//=================================
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
int main() {
    stale_flippant();
 
    w(t) {
        int n; cin >> n;
        vector<vector<int>> grid(4, vector<int>(n+2, 0)), dp(4, vector<int>(n+2, 0));
        for (int i=1; i<=2; i++)
            for (int j=1; j<=n; j++)
                cin >> grid[i][j];
 
       
        for (int i=n; i>1; i--)
            dp[1][i] += dp[1][i+1] + grid[1][i];
 
        for (int i=1; i<n; i++)
            dp[2][i] += dp[2][i-1] + grid[2][i];
 
        dp[2][n] = 1;
        // for (int i=1; i<=2; i++){
        //     for (int j=1; j<=n; j++)
        //         cout << dp[i][j] << ' ';
        //     cout << '\n';
        // }
        int i = 1, j = 1;
        while(i!=2 and j!=n)
        {   
            // cout << i << ' ' << j << '\n';
            dp[i][j] = 0;
            if (dp[i+1][j] > dp[i][j+1]) i++;
            else j++;
        }
        // dp[i][j] = 0;
        while (j<=n) dp[i][j++] = 0;
        dp[2][n] = 0;
        // for (int i=1; i<=2; i++){
        //     for (int j=1; j<=n; j++)
        //         cout << dp[i][j] << ' ';
        //     cout << '\n';
        // }
 
        cout << max(*max_element(dp[1].begin(), dp[1].end()), *max_element(dp[2].begin(), dp[2].end())) << '\n';
    }
    return 0;
}
 
 
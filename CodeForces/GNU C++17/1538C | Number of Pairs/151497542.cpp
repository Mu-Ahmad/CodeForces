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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> arr(n);
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
 
        sort(arr.begin(), arr.end());
        ll ans = 0;
        for(auto num : arr)
        {
            int lower = l - num;
            int upper = r - num;
 
          
            ans += upper_bound(arr.begin(), arr.end(), upper) - arr.begin();
            ans -= lower_bound(arr.begin(), arr.end(), lower) - arr.begin();
            if (l <= 2 * num && 2 * num <= r) ans--;
            
        }
        cout << ans / 2 << "\n";
    }
    return 0;
}
 
 
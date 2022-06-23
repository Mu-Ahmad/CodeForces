#include<bits/stdc++.h>
using namespace std;
 
#define ff               first
#define ss               second
#define ll               long long
#define pb               push_back
#define mp               make_pair
#define pqb              priority_queue<int>
#define pqs              priority_queue<int,vi,greater<int> >
#define setbits(x)       __builtin_popcountll(x)
#define zrobits(x)       __builtin_ctzll(x)
#define mod              1000000007
#define inf              1e18
#define deb(x)    cout<< #x << ' ' << x << endl
#define ps(x,y)          fixed<<setprecision(y)<<x
#define reset(a, b)      memset(a, b, sizeof(a))
#define w(x)             int x; cin>>x; while(x--)
#define finc(s, e, k)  for(int i=s; i<e; i+=k)
#define f(s, e)    finc(s, e, 1)
#define frange(x)   finc(0, x, 1)
#define repeat(x)   frange(x)
#define all(cont)        cont.begin(), cont.end()
#define rall(cont)       cont.end(), cont.begin()
#define forItemIn(cont)  for(auto i = begin(cont); i != end(cont); i++)
#define forItemInr(cont)  for(auto i = rbegin(cont); i != rend(cont); i++)
#define mk(arr,n,type)      type *arr=new type[n];
#define copyArray(src, des, n, type) type des[n]; frange(n){des[i] = src[i];}
//================================
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int>  vi;
typedef vector<ll>  vl;
typedef vector<pii>  vpii;
typedef vector<pl>  vpl;
typedef vector<vi>  vvi;
typedef vector<vl>  vvl;
//=================================
mt19937                     rng(chrono::steady_clock::now().time_since_epoch().count());
//=================================
void stale_flippant() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
//=================================
int dp[2001][2001];
int a[2001];
 
int32_t main()
{
 stale_flippant();
 int n, h, l, r; cin >> n >> h >> l >> r;
 
 
 dp[0][0] = 0;
 
 for (int i = 1; i < h; ++i)
  dp[0][i] = -1;
 
 
 for (int i = 1; i <= n; ++i)
  cin >> a[i];
 
 
 for (int i = 0; i < n; ++i)
 {
  //i denotes number of sleeps
  //calculate answer for [i+1];
 
  for (int hr = 0; hr < h; ++hr)
  {
   dp[i + 1][hr] = -1;
  }
 
  for (int hr = 0; hr < h; ++hr)
  {
   if (dp[i][hr] == -1)
    continue;
 
   int h1 = (hr + a[i + 1] - 1 + h) % h;
   int h2 = (hr + a[i + 1]) % h;
 
   dp[i + 1][h1] = max(dp[i + 1][h1], dp[i][hr] + (l <= h1 && h1 <= r));
   dp[i + 1][h2] = max(dp[i + 1][h2], dp[i][hr] + (l <= h2 && h2 <= r));
  }
 }
 
 //After n sleeps
 int ans = 0;
 
 for (int i = 0; i < h; ++i)
  if (dp[n][i] != -1)
   ans = max(ans, dp[n][i]);
 
 cout << ans << '\n';
 return 0;
}
 
/*test case
7 24 21 23
16 17 14 20 20 11 22
*/
 
/*output
3
*/
 
 
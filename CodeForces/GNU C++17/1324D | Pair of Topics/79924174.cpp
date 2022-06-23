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
int main() {
 stale_flippant();
 
 int n; cin >> n;
 int a[n], b[n], c[n];
 
 frange(n) cin >> a[i];
 frange(n) cin >> b[i];
 
 frange(n) c[i] = b[i] - a[i];
 
 sort(c, c + n);
 
 ll ans(0);
 
 frange(n) {
  //num of j's so that cj < -ci
 
  //find smallest j s.t cj >= -ci;
 
  auto it = lower_bound(c + 1 + i, c + n, -c[i]);
  int id = it - c;
  ans += id - (i + 1);
 }
 
 cout << ans << endl;
 
 return 0;
}
 
 
/*Test case 0
5
4 8 2 6 2
4 5 4 1 3
*/ //output -> 7
 
/*Test case1
4
1 3 2 4
1 3 2 4
*/ //output -> 0
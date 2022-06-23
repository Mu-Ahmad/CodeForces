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
 freopen("Output.txt", "w", stdout);
#endif
}
 
//=================================
int main() {
 stale_flippant();
 
 w(t) {
  int n ; cin >> n;
  ll ans = 0;
  f(1, n / 2 + 1) {
   ans += i * 1ll * i;
  }
  cout << ans * 8 << endl;
 }
 
 return 0;
}
 
 
/*Test Case
3
1
5
499993
*/
 
/*Output
0
40
41664916690999888
*/
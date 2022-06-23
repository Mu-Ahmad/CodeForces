#include<bits/stdc++.h>
using namespace std;
 
#define fi               first
#define si               second
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
 
ll gcd(ll a, ll b)
{
 if (b == 0) return a;
 else return gcd(b, a % b);
}
 
ll lcm(ll a, ll b)
{
 return a / gcd(a, b) * b;
}
 
//=================================
int addCost(int * cost, int  white, int x, int y) {
 if (x <= y / 2) *cost += white * x;
 else *cost += (white / 2) * y + (white % 2) * x;
}
int main() {
 stale_flippant();
 w(t) {
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  int cost = 0;
  f(1, n + 1) {
   int white = 0;
   for (int j = 1; j <= m; j++) {
    char temp ; cin >> temp;
    if (temp == '.') white++;
    else { addCost(&cost, white, x, y); white = 0;}
   }
   addCost(&cost, white, x, y); white = 0;
  }
  cout << cost << endl;
 }
 
 return 0;
}
 
 
 
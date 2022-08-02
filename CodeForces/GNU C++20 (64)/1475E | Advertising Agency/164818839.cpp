stdc++.h>
<ext/pb_ds/assoc_container.hpp>
<ext/pb_ds/tree_policy.hpp>

 std;
 __gnu_pbds;

 fi                  first
 se                  second
 ll                  long long
 ull                 unsigned long long
 lld                 long double
 pb                  push_back
 mp                  make_pair
 pqb                 priority_queue<int>
 pqs                 priority_queue<int,vi,greater<int> >
x)          __builtin_popcountll(x)
x)          __builtin_ctzll(x)
 mod                 1000000007
 inf                 1e18
             cout<< fixed << setprecision(y) << x
 b)         memset(a, b, sizeof(a))
                int x; cin>>x; while(x--)
 e, k)       for(int i=s; i<e; i+=k)
             finc(s, e, 1)
)           finc(0, x, 1)
)           frange(x)
)           cont.begin(), cont.end()
cont)          cont.end(), cont.begin()
,type)                  type *arr=new type[n];
 copyArray(src, des, n, type)    type des[n]; frange(n){des[i] = src[i];}
//================================
, int>      pii;
 ll>        pl;
<int>         vi;
<ll>          vl;
<pii>         vpii;
<pl>          vpl;
<vi>          vvi;
typedef vector<vl>          vvl;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//=================================
mt19937                                 rng(chrono::steady_clock::now().time_since_epoch().count());
//=================================
 
void _print(ll t) {cout << t;}
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(lld t) {cout << t;}
void _print(double t) {cout << t;}
void _print(ull t) {cout << t;}
 
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.fi); cout << ","; _print(p.se); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #define deb(x) cout << #x <<" "; _print(x); cout << endl;
#else
    #define deb(x)
#endif
}
 
template<class Container>
void split(const string& str, Container& cont, char delim = ' ') {
  stringstream ss(str);
  string token;
  while (getline(ss, token, delim)) 
    cont.push_back(token);
}
 
ll gcd(ll a,ll b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
 
ll lcm(ll a,ll b){
    return a/gcd(a,b)*b;
}
//=================================
ll factorial[10000001];
 
 
ll moduloInverse(ll base, int p){
  ll identity = 1LL;
 
  // cout << base << ' ' << p << ' ';
 
  while(p>1){
    if(p&1)
      identity = (identity*1LL*base) % mod;
    base = (base * 1LL * base) % mod;
    p /= 2;
  }
  // cout  << (identity*base*1LL) % mod << '\n';
  return (identity*base*1LL) % mod;
}
 
ll Choose(int n, int k){
  if (k > n) return 0;
 
  ll res = factorial[n];
  (res *= moduloInverse(factorial[k], mod-2) * 1LL) %= mod;
  (res *= moduloInverse(factorial[n-k], mod-2) * 1LL) %= mod;
 
  return res % mod;
}
 
int main() 
{
    stale_flippant();
    factorial[0] = factorial[1] = 1;
 
    for(int i=2; i<=10000000; i++)
        factorial[i] = (factorial[i-1]*i*1LL) % mod;
 
    int t; cin >> t;
 
    while(t--)
    {
        int n, k; cin >> n >> k;
        vi arr(n);
        map<int, int> freq, k_item;
        for (int i=0; i<n; i++) 
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        partial_sort(arr.begin(), arr.begin() + k, arr.end(), greater<int>());
        // deb(arr);
        for (int i=0; i<k; i++)
            k_item[arr[i]]++;
 
        ll ans = 1;
        for (auto[x, c] : k_item) (ans *= Choose(freq[x], c) % mod) %= mod;
 
        cout << ans << '\n';
    }
 
    return 0;
}
 
 
 
 
 
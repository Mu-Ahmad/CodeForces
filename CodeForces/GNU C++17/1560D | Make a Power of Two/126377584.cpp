#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define fi                first
#define se                second
#define ll                 long long
#define pb                push_back
#define mp                make_pair
#define pqb               priority_queue<int>
#define pqs               priority_queue<int,vi,greater<int> >
#define setbits(x)        __builtin_popcountll(x)
#define zrobits(x)        __builtin_ctzll(x)
#define mod               1000000007
#define inf               1e18
#define deb(x)        cout<< #x << ' ' << x << endl
#define deb2(x, y)          cout<< #x << ' ' << x <<' '<< #y << ' ' << y << endl
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
#define ps(x,y)           cout<< fixed << setprecision(y) << x
#define reset(a, b)       memset(a, b, sizeof(a))
#define w(x)              int x; cin>>x; while(x--)
#define finc(s, e, k)    for(int i=s; i<e; i+=k)
#define f(s, e)        finc(s, e, 1)
#define frange(x)      finc(0, x, 1)
#define repeat(x)      frange(x)
#define all(cont)         cont.begin(), cont.end()
#define rall(cont)        cont.end(), cont.begin()
#define mk(arr,n,type)          type *arr=new type[n];
#define copyArray(src, des, n, type)  type des[n]; frange(n){des[i] = src[i];}
//================================
typedef pair<int, int>  pii;
typedef pair<ll, ll>  pl;
typedef vector<int>    vi;
typedef vector<ll>    vl;
typedef vector<pii>    vpii;
typedef vector<pl>    vpl;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//=================================
mt19937                         rng(chrono::steady_clock::now().time_since_epoch().count());
//=================================
void stale_flippant() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
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
 
int LCS(string str1, string str2){
  int ans = 0;
  int k=0;
  bool found = true;
  for(int i=0; i<str1.length(); i++){
    if(!found) continue;
    found = false;
    for(int j=k; j<str2.length(); j++){
      if(str1[i] == str2[j]) {
        ans++;
        k = j+1;
        found = true;
        break;
      }
    }
  }
    return ans;
}
 
//=================================
int main() {
  stale_flippant();
 
  
  vector<string> powersofTwo = 
  {"1", "2", "4", "8", "16", "32", "64", "128", "256", "512", "1024", "2048", "4096", "8192", "16384", "32768", "65536", "131072", "262144", "524288", "1048576", "2097152", "4194304", "8388608", "16777216", "33554432", "67108864", "134217728", "268435456", "536870912", "1073741824", "2147483648", "4294967296", "8589934592", "17179869184", "34359738368", "68719476736", "137438953472", "274877906944", "549755813888", "1099511627776", "2199023255552", "4398046511104", "8796093022208", "17592186044416", "35184372088832", "70368744177664", "140737488355328", "281474976710656", "562949953421312", "1125899906842624", "2251799813685248", "4503599627370496", "9007199254740992", "18014398509481984", "36028797018963968", "72057594037927936", "144115188075855872", "288230376151711744", "576460752303423488", "1152921504606846976", "2305843009213693952", "4611686018427387904"};
 
 
  w(t){
    string num;
    cin >> num;
    
    int temp, temp_ans, ans = INT_MAX;
 
    for(int i=0; i<powersofTwo.size(); i++){
 
      int temp = LCS(powersofTwo[i], num);
 
      temp_ans = (powersofTwo[i].length() - temp) + (num.length()-temp);
      if(temp_ans < ans){
        // deb2(temp, powersofTwo[i]);
        ans = temp_ans;
        // cout << powersofTwo[i] << '\n';
      }
    }
 
    cout << ans << "\n";
  }
  return 0;
}
 
 
// 2
// 3
// 1
// 3
// 0
// 0
// 2
// 1
// 3
// 4
// 9
// 2
 
 
#include<bits/stdc++.h>
using namespace std;
 
#define fi               first
#define se               second
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
#define deb2(x, y)          cout<< #x << ' ' << x <<' '<< #y << ' ' << y << endl
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
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
 
bool isPower(ll y)
{
 ll pow = 1LL;
 while (pow < y)
  pow = (pow << 1);
 //deb2(y, pow);
 return (pow == y);
}
//=================================
int main() {
 stale_flippant();
 w(t) {
  int n, answer = 0; cin >> n;
  set<int> arr;
  frange(n) {
   int temp;
   cin >> temp;
   arr.insert(temp);
  }
 
  // for (int x : arr) {
  //  cout << x << ' ';
  // }
  //cout << endl;
  set<int> ans;
  if (n % 2) {
end2:
   cout << "-1" << '\n';
   continue;
  }
 
 
  // for (int x : ans) {
  //  cout << x << ' ';
  // }
  // cout << endl;
  bool check = true;
  for (int i = 1; i < 1024; i++) {
   check = true;
   for (int y : arr) {
    int temp = y ^ i;
    //cout << temp << ' ';
    if (arr.count(temp) == 0) {
     //cout << temp << "Hussah\n";
     check = false;
     break;
    }
   }
   if (check) {
    answer = i;
    cout << answer << '\n';
    goto start;
   }
  }
 
  goto end2;
start:
  continue;
 
 }
 
 return 0;
}
 
 
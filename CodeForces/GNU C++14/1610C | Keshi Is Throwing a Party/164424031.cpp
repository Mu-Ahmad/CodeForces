stdc++.h>

 std;

 ll                  long long
 ull                 unsigned long long
 lld                 long double

) {cout << t;}
 t) {cout << t;}
string t) {cout << t;}
 t) {cout << t;}
lld t) {cout << t;}
double t) {cout << t;}
ull t) {cout << t;}

 T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.fi); cout << ","; _print(p.se); cout << "}";}
 T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
 T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
 T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
 T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}

 stale_flippant() {
sync_with_stdio(0); cin.tie(0); cout.tie(0);
 ONLINE_JUDGE
"input.txt", "r", stdin);
"output.txt", "w", stdout);
x) cout << #x <<" "; _print(x); cout << endl;

x)



int, int>
<pi, pi>

 se second

//returns first i in l - r that returns the predicate true, never evaluates r
template<typename P, typename I> I BinarySearch(const P& predicate, I l, I r)
{
    l--;
    while (r - l > 1)
    {
        auto mid = (l+r) / 2;
        // deb(mid)
        if (predicate(mid)) l = mid;
        else r = mid;
    }
    return r - 1;
}
 
 
vector<ll> a, b;
bool solve(int x)
{   
    int count = 0;
    for (int i=0; i<a.size(); i++)
    {
        if(x - 1 - a[i] <= count && count <= b[i]) count++;
    }
 
    return count >= x;
}
 
int main()
{   
    stale_flippant();
 
    #define int ll
 
    int t; cin >> t;
 
    while(t--)
    {   
        int n; cin >> n;
        a = vector<int>(n);
        b = vector<int>(n);
        for (int i=0; i<n; i++) cin >> a[i] >> b[i];
 
        cout << BinarySearch(solve, 0ll, n+5) << '\n';
    }
 
    return 0;
}
 
 
 
 
 
 
 
 
 
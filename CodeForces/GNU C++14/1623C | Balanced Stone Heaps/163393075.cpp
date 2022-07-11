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



//returns first i in l - r that returns the predicate true, never evaluates r
typename P, typename I> I BinarySearch(const P& predicate, I l, I r)


 l > 1)

        auto mid = (l+r) / 2;
        if (predicate(mid)) r = mid;
        else l = mid;
    }
    return r;
}
 
vector<int> arr;
 
bool solve(int x)
{   
    auto temp_arr = arr;
    // deb(x);
    // deb(temp_arr);
    for (int i=0; i<arr.size()-2; i++)
    {
        int d = max(min(arr[i], temp_arr[i] - x) /3, 0);
        temp_arr[i] -= d*3;
        temp_arr[i+1] += d;
        temp_arr[i+2] += d+d;
        // deb(temp_arr);
    }
    int m = *min_element(temp_arr.begin(), temp_arr.end());
    return m<x;
}
 
 
int main()
{   
    stale_flippant();
    int t; cin >> t;
 
    while(t--)
    {
        int n; cin >> n;
 
        arr = vector<int>(n);
 
        for (int i=n-1; i>=0; i--)
            cin >> arr[i];
 
        cout << BinarySearch(solve, 0ll, (ll)(1e9)+5ll) - 1 << '\n';
    }
 
 
    return 0;
}
 
 
 
 
 
 
 
 
 
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


{   
    stale_flippant();
 
    #define int ll
 
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> arr(n);
 
        for (auto& c : arr) cin >> c;
 
        vector<int> ans(n);
 
        int k = (n & 1) ? n - 3 : n;
        // deb(k);
        for (int i=0; i<k; i+=2)
        {
            ans[i] = -1 * arr[i + 1];
            ans[i + 1] = arr[i];
        }
 
        if (n&1)
        {
            if (arr[k] + arr[k+1] != 0)
            {
                ans[k] = ans[k+1] = -1 * arr[k+2];
                ans[k+2] = arr[k] + arr[k+1];
                deb("1");
            } 
            else if (arr[k] + arr[k+2] != 0)
            {
                ans[k] = ans[k+2] = -1 * arr[k+1];
                ans[k+1] = arr[k] + arr[k+2];
                deb("2");
            } 
            else
            {
                ans[k+2] = ans[k+1] = -1 * arr[k];
                ans[k] = arr[k+2] + arr[k+1];
                deb("3");
            }
        }
 
        for (auto& c : ans) cout << c << ' ';
        cout << '\n';
    }
    return 0;
}
 
 
 
 
 
 
 
 
 
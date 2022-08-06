stdc++.h>

 std;

long

) {cout << t;}
 t) {cout << t;}
string t) {cout << t;}
 t) {cout << t;}
double t) {cout << t;}

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






    stale_flippant();

>> t;


int ll
; cin >> n >> k;
 
        vector<int> arr(n+1);
        for (int i =1; i<=n; i++) cin >> arr[i];
 
        int l = max(1ll, n - 2*k);
        int ans = INT_MIN;
        for (int i=l; i<n; i++)
            for (int j=i+1; j<=n; j++)
                ans = max(ans, i*j - k*(arr[i] | arr[j]));
        cout << ans << '\n';
    }
    return 0;
}
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





(n+1)) / 2;




    stale_flippant();
>> t;

    {
        ll n; cin >> n;
        if (n & 1) 
        {
            cout << "Bob\n";
            continue;
        }
        if (__builtin_popcountll(n) > 1)
        {
            cout << "Alice\n";
            continue;
        }
 
        if ((__lg(n) & 1) == 0) cout << "Alice\n";
        else cout << "Bob\n";
 
    }
    return 0;
}
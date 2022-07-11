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






    stale_flippant();
>> n;

    ll p = 1;
    int count = 1;
    for (int i=2; i<=n; i++)
        if (__gcd(i, n) == 1) 
        {   
            count++;
            (p *= i) %= n;
        }
 
    cout << (count - (p != 1));
    cout << "\n1 ";
 
    for (int i=2; i<=n; i++)
        if (__gcd(i, n) == 1 and i != p) 
            cout << i << ' ';
 
 
    return 0;
}
 
 
 
 
 
 
 
 
 
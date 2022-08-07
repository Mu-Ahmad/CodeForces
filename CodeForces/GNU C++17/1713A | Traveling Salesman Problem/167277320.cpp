stdc++.h>

 std;

long
vector <int>

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
x) cout  <<" "; _print(x); cout << endl;

x)






    stale_flippant();
>> t;


 cin >> n;
0, b = 0, c = 0, d = 0;
        for (int i=0; i<n; i++)
        {
 
            int x, y;
            cin >> x >> y;
            if (x < 0)
            {
                a = max(a, abs(x));
            }
            else if (x > 0)
            {
                b = max(b, abs(x));
 
            }
            else if (y < 0)
            {
                c = max(c, abs(y));
 
            }
            else if (y > 0)
            {
                d = max(d, abs(y));
            }
        }
 
        vi arr = {a, b, c, d};
        deb(arr);
 
        ll ans = 2*a + 2*b + 2*c + 2*d;
        cout << ans << '\n';
    }
    return 0;
}
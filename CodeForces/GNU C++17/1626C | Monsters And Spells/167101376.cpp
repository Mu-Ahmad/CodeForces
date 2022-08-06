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
        int n; cin >> n;
        vector<ll> time(n), health(n);
        for (int i=0; i<n; i++) cin >> time[i];         
        for (int i=0; i<n; i++) cin >> health[i]; 
        ll total = 0;
        pair<ll, ll> last = {time[n-1], health[n-1]};
 
        for (int i = n-1; i>=0; i--)
        {
            int k = last.second - (last.first - time[i]);
            if (k > 0)
            {
                int inc = max(health[i] - k, 0ll);
                last.second += inc;
            }
            else
            {
                total += sum(last.second);
                last = {time[i], health[i]};
            }
        }
 
        cout << total + sum(last.second) << '\n';
 
    }
    return 0;
}
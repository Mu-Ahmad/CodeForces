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

        vi arr(n);
        for (int i=0; i<n; i++) cin >> arr[i];
 
        int idx = max_element(arr.begin(), arr.end()) - arr.begin();
 
        bool flag = true;
 
        int last = arr[0];
        for (int i=0; i<idx; i++)
        {
            if (arr[i] < last) flag = false;
            last = arr[i];
        }
 
        last = arr[idx];
        for (int i=idx+1; i<n; i++)
        {
            if (arr[i] > last) flag = false;
            last = arr[i];
        }
 
        cout << (flag ? "YES\n" : "NO\n");
 
    }
    return 0;
}
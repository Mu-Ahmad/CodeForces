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
        vi squares, ans(n, -1);
        for (int i=0; i*i<=2*(n-1); i++)
            squares.push_back(i*i);
 
        int num = n-1;
 
        while(squares.size() and num >= 0)
        {
            int sq = squares.back(); squares.pop_back();
            int idx = sq - num;
 
            while (idx < n and ans[idx] == -1)
                ans[idx++] = num--;
 
        }
 
        for (int i=0; i<n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}
h>



 ll                  long long
 ull                 unsigned long long
 lld                 long double

cout << t;}
cout << t;}
{cout << t;}
cout << t;}
cout << t;}
{cout << t;}
cout << t;}

class V> void _print(pair <T, V> p) {cout << "{"; _print(p.fi); cout << ","; _print(p.se); cout << "}";}
void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}

{
sync_with_stdio(0); cin.tie(0); cout.tie(0);

"input.txt", "r", stdin);
"output.txt", "w", stdout);
 cout << #x <<" "; _print(x); cout << endl;





int>
 pi>




int main()
{   
    stale_flippant();
 
    #define int ll
    int t; cin >> t;
    while(t--)
    {
        int n, x, s = 0; cin >> n;
        map<int, int> arr{{0, 1}};
        char ch;
        ll ans = 0ll;
        for (int i = 0; i<n; i++)
        {
            cin >> ch;
            s += ch - '0' - 1;
            // deb(s);
            arr[s]++;
            ans += arr[s] - 1;
        }
 
        cout << ans << '\n';
    }
    return 0;
}
 
 
 
 
 
 
 
 
 
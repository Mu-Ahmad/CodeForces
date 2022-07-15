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



1000000007;
int main()
{   
    stale_flippant();
 
    #define int ll
    vector <int> dp(200010);
    for (int i=0; i<9; i++) dp[i] = 2;
    dp[9] = 3;
    for(int i=10; i<200010; i++) (dp[i] = dp[i-9] + dp[i-10]) %= mod;
    int t; cin >> t;
    while(t--)
    {
        // deb(t);
        int n, m; cin >> n >> m;
 
        ll ans = 0;
        while(n)
        {
            int k = n%10;
            n/=10;
            (ans += ((k+m<10)?1:dp[k+m-10])) %= mod;
            // deb(k+m-10);
        }
 
        cout << ans << '\n';
    }
    return 0;
}
 
 
 
 
 
 
 
 
 
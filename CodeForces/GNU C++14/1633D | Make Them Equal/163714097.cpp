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


 arr_gain, arr_c;

ll n, k;
 
ll solve(ll i, ll w)
{   
    // base case
    if (w>k) return INT_MIN;
    if (i == n) return 0;
 
    // Dp Check
    if (dp[i][w] != -1) return dp[i][w];
    // recursive call
 
    return dp[i][w] = max(solve(i+1, w+arr_c[arr_b[i]]) + arr_gain[i], solve(i+1, w));
 
}
 
 
int main()
{   
    stale_flippant();
 
    #define int ll
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        k = min(n*15, k);
        arr_b = vector<int>(n);
        arr_gain = vector<int>(n);
        arr_c = vector<int>(1005, -1);
        dp = vector<vector<ll>> (n, vector<ll>(k+1, -1));
 
 
        for (int i=0; i<n; i++) cin >> arr_b[i];
        for (int i=0; i<n; i++) cin >> arr_gain[i];
 
 
        arr_c[1] = 0;
        arr_c[2] = 1;
        queue<int> Q; Q.push(2); Q.push(1);
        while(Q.empty() == false)
        {
            int num = Q.front(); Q.pop();
            for (int i=1; i<=num; i++)
                if (num + num/i <= 1002 and arr_c[num + num/i] == -1)
                {
                    Q.push(num + num/i);
                    arr_c[num + num/i] = arr_c[num] + 1;
                }
        } 
        // deb(arr_c);
        // for (int i=0; i<n; i++)
        //     cout << arr_c[arr_b[i]] << ' ';
        // cout << endl;
 
        cout << solve(0, 0) << '\n';
    }
    return 0;
}
 
 
 
 
 
 
 
 
 
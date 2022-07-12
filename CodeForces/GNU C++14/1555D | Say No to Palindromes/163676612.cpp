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











    string str; cin >> str;
 
    vector<vector<int>> dp(6, vector<int>(n+1, 0));
 
    string allowed = "abc";
    int idx = 0;
    do 
    {   
        for (int i=1; i<=n; i++)
            dp[idx][i] = dp[idx][i-1] + (str[i-1] != allowed[(i-1)%3]);
        idx++;
    } while (next_permutation(allowed.begin(), allowed.end()));
 
    int a, b;
    while(q--)
    {   
        int ans = INT_MAX;
        cin >> a >> b;
        for (int i=0; i<6; i++)
            ans = min(dp[i][b] - dp[i][a-1], ans);
        cout << ans << endl;
    }
    
    return 0;
}
 
 
 
 
 
 
 
 
 
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



500005
 isPrime;
 prime;

 0; i < MAX; i++) isPrime[i] = 1;

 isPrime[1] = 0;

 2; i * i < MAX; i++) {
isPrime[i])
            for (int j = i * i; j < MAX; j += i)
                isPrime[j] = 0;
    }
 
    for (int i = 0; i < MAX; i++)
        if (isPrime[i])
            prime.push_back(i);
 
    return;
}
 
 
int sol(ll num)
{   
    int count = 0;
    for (auto p : prime)
    {
        while (num % p == 0)
        {
            count++;
            num /= p;
        }
 
        if (p*p>num) break;
        
    }
 
    if (num > 1) count++;
 
    return count;
}
 
int main()
{
    stale_flippant();
    sieve();
    int t; cin >> t;
    int x = 1;
    map <ll, int> dp;
    while(t--)
    {   
        #define int ll
        int a, b, k;
        cin >> a >> b >> k;
 
        if (k > 60)
        {
            cout << "NO\n";
            continue;
        }
 
        if (k == 1)
        {
            if ((a%b == 0 or b%a == 0) and a != b)
                cout << "YES\n";
            else 
                cout << "NO\n";
            continue;
        }
        int a_count = dp[a] ? dp[a] : sol(a);
        int b_count = dp[b] ? dp[b] : sol(b);
 
        dp[a] = a_count;
        dp[b] = b_count;
 
        int count = a_count + b_count;
        deb(a_count);
        deb(b_count);
        cout << (k <= count ? "YES\n" : "NO\n");
    }
    return 0;
}
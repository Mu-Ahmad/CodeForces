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











 
    while(t--)
    {
        string n; cin >> n;
        // reverse(n.begin(), n.end());
        string splits[2];
        bool x = false;
        deb(n);
        for  (auto c : n)
        {
            splits[x] += c;
            x ^= 1; 
        }
        deb(splits[0]);
        deb(splits[1]);
        int n1 = atoi(splits[0].c_str()) + 1;
        int n2 = atoi(splits[1].c_str()) + 1;
        cout << n1*n2 - 2 << '\n';
 
    }
 
 
    return 0;
}
 
 
 
 
 
 
 
 
 
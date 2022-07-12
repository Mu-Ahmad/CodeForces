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




{   
    stale_flippant();
 
    #define int ll
    int n; cin >> n;
 
    int l = 0, r = n - 1;
 
    vector<pi> arr(n);
 
    for (int i=0; i<n; i++)
        cin >> arr[i].se >> arr[i].fi;
 
    sort(arr.begin(), arr.end());
 
    int bought = 0;
    ll cost = 0;
    while (r>=l and bought<arr[r].fi)
    {
        int b = arr[r].se;
        deb(b);
        bought += b;
        cost += b*2ll;
        if (bought > arr[l].fi)
        {   
            int k = bought - arr[l].first;
            deb(k);
            bought -= k;
            cost -= k*2ll;
            arr[r].se = k;
            do
            {   
                bought += arr[l].se;
                cost += arr[l].se;
                l++;
            } while(r>=l and bought > arr[l].fi);
 
        }   else r--;
 
    }
 
 
    while(r>=l)
    {   
        // deb(cost);
        cost += arr[r--].se;
    }
 
    cout << cost << '\n';
    
    return 0;
}
 
 
 
 
 
 
 
 
 
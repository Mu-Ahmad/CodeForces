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



int r)


 << l << ' ' << r << '\n';
();




 
int main()
{
    // stale_flippant();
    int t; cin >> t;
    while(t--)
    {   
        int n, k; cin >> n;
        if (n == 1) 
        {
            int k = ask(1, 2);
            cout << "! " << k << "\n";
            continue;
        }
 
        int l = 1, _r = 4, r = 4;
        int final = (1 << n);
        vi curr;
        while (_r <= final)
        {   
            l = _r - 3;
            r = _r;
            deb(l);
            int k = ask(l, r);
            if (k == 1) r--;
            else if (k == 0) l++, r --;
            if (k == 2) l++;
 
            k = ask(l, r);
            if (k == 1) curr.push_back(l);
            else curr.push_back(r);
 
            _r+=4;
        }
 
        while(curr.size() >= 4)
        {
            vi temp;
            for (int e = 3; e < curr.size(); e += 4)
            {   
                l = e - 3;
                r = e;
                int k = ask(curr[l], curr[r]);
                if (k == 1) r--;
                else if (k == 0) l++, r --;
                if (k == 2) l++;
 
                k = ask(curr[l], curr[r]);
                if (k == 1) temp.push_back(curr[l]);
                else temp.push_back(curr[r]);
            }
            curr = temp;
        }
 
        while (curr.size() != 1)
        {
            vi temp;
            deb((int)curr.size());
            for (int i=0; i<curr.size(); i+=2)
            {
                int k = ask(curr[i], curr[i+1]);
                if (k == 1) temp.push_back(curr[i]);
                else temp.push_back(curr[i+1]);
            }
 
            curr = temp;
        }
        cout << "! " << curr.back() << "\n";
        cout.flush();
    }
    return 0;
}
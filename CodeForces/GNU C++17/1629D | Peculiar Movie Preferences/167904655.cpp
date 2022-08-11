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
<string> original, size_two;
        vector<string> arr(n);
 
        for (int i=0; i<n; i++) 
        {
            cin >> arr[i];
            original.insert(arr[i]);
            if (arr[i].size() > 2) 
                size_two.insert(arr[i].substr(1));
        }
 
        bool flag = false;
 
        for (int i=0; i<n; i++)
        {
            string str = arr[i];
            if (str.size() == 1) 
            {
                flag = true;
                break;
            }
 
            if (str[0] == str.back()) 
            {
                flag = true;
                break;
            }
 
            if (str.size() == 2)
            {
                original.erase(original.find(str));
                swap(str[0], str[1]);
                if (original.count(str) or size_two.count(str))
                {
                    flag = true;
                    break;
                }
            }
 
            if (str.size() == 3)
            {
                original.erase(original.find(str));
                size_two.erase(size_two.find(str.substr(1)));
                swap(str[0], str[2]);
                string other;
                other += str[1];
                other += str[2];
                if (original.count(str) or original.count(other))
                {
                    flag = true;
                    break;
                }
 
            }
        }
 
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
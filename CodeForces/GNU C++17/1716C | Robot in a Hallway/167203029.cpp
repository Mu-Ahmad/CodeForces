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


 cin >> m;

        vector <vi> grid(2, vi(m+1));
        vi clck(m+1, 0), an_clck(m+1, 0);
 
        for (int i=0; i<m; i++) 
        {
            cin >> grid[0][i];
            grid[0][i]++;
        }
        for (int i=0; i<m; i++) 
        {
            cin >> grid[1][i];
            grid[1][i]++;
        }
 
        grid[0][0] = 0;
 
        clck[m-1] = max(grid[0][m-1] + 1, grid[1][m-1]);
        an_clck[m-1] =  max(grid[0][m-1], grid[1][m-1] + 1);
 
        int steps = 2;
        for (int i=m-2; i>=0; i--)
        {
            steps += 2;
            clck[i] = max({grid[0][i]+steps-1, clck[i+1] + 1, grid[1][i]});
            an_clck[i] = max({grid[1][i]+steps-1, an_clck[i+1] + 1, grid[0][i]});
 
        }
 
        int ans = INT_MAX;
        int curr_time = -1;
        for (int i=0; i<m; i++, steps-=2)
        {
            if (i & 1)
            {
                ans = min(ans, max(curr_time + steps, an_clck[i]));
                curr_time = max(curr_time+1,grid[1][i]);
                curr_time = max(curr_time+1,grid[0][i]);
            }
            else
            {
                ans = min(ans, max(curr_time + steps, clck[i]));
                curr_time = max(curr_time+1,grid[0][i]);
                curr_time = max(curr_time+1,grid[1][i]);
            }
 
        }
 
        cout << ans << '\n';
 
    }
    return 0;
}
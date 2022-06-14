#include <iostream>
#include <vector>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
#define vii vector<vi>
#define deb3(x, y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl
 
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
int main()
{
    // stale_flippant();
 
    int n, m; cin >> n >> m;
    string str1, str2; cin >> str1 >> str2;
    vii indices(30);
    vi total_count(30, 0), curr_count(30, 0);
 
    vi r_position(m);
    int k = n-1, l = m-1;
    while(l>-1)
    {
        if (str2[l] == str1[k])
        {
            r_position[l] = k;
            l--;
        } 
        k--;
    }
 
    vi l_position(m);
    k = 0, l = 0;
    while(l<m)
    {
        if (str2[l] == str1[k])
        {
            l_position[l] = k;
            l++;
        } 
        k++;
    }
 
    // for (int i=0; i<m; i++)
    //     cout << r_position[i] << ' ';
    // cout << endl;
    
    int ans = 0;
    for (int i=0; i<m-1; i++)
    {
        ans = max(ans, r_position[i+1]-l_position[i]);
    }
    cout << ans << '\n';
    return 0;
}
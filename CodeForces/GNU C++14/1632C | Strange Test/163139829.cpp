stdc++.h>
 y, z)       cout<< #x << ' ' << x << ' '<<#y << ' ' << y << ' ' << #z << ' ' << z << endl

 std;

 stale_flippant() {
sync_with_stdio(0); cin.tie(0); cout.tie(0);
 ONLINE_JUDGE
"input.txt", "r", stdin);
"output.txt", "w", stdout);





    stale_flippant();
>> t;


;
 a >> b;
= b-a;
 _a=a; _a<b; _a++)

 _b = 0;
(int i = 31; i>=0; i--)
if (b & (1<<i)) _b |= (1<<i);
else if (_a & (1<<i)) 
{
                    _b |= (1<<i);
                    break;
}
= min(ans, _a + (_a|_b) - a - b + 1);
// deb3(_a, _b, ans);


 ans << '\n';


}
 
 
 
 
 
 
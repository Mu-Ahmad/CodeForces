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


long n,k; cin >> n >> k;
<int> arr(n); 
 i=0; i<n;i++) cin >> arr[i];
.begin(), arr.end());

long first_sum = arr[0] * n;
 minus_fact = max(ceil(((double)first_sum - k) / (double)n), (double)0);
// deb3(minus_fact, k, first_sum);

long curr_sum = 0;

<n; i++)

            curr_sum += arr[i];
((arr[0]-minus_fact) * (n-i) + curr_sum <= k) continue;
((arr[0]-minus_fact-1) * (n-i) + curr_sum <= k) minus_fact++;
 break;


 minus_fact + n - i << '\n';
    }
    return 0;
}
 
 
 
 
 
 
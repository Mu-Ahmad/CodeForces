stdc++.h>

 std;


 stale_flippant() {
sync_with_stdio(0); cin.tie(0); cout.tie(0);
 ONLINE_JUDGE
"input.txt", "r", stdin);
"output.txt", "w", stdout);



long



    stale_flippant();
>> t;


 cin >> n;
<ll> arr(n); for (auto& c : arr) cin >> c;
<ll> dp(n, 0);
 ll> countSum;
[arr[0]] = 1;
 i=1; i<n; i++)

] += dp[i-1] + countSum[arr[i]];
            countSum[arr[i]] += i+1;


 accumulate(dp.begin(), dp.end(), 0ll);
 ans << '\n';





 
 
 
 
 
 
 
 
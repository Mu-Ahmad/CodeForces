#include <bits/stdc++.h>
#define maxN 1000005
 
 
using namespace std;
 
void stale_flippant() {
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
int main()
{
 stale_flippant();
 int t, d; cin >> t;
 
 // initiate primes
 bitset<maxN> isPrime;
 vector <long long> prime;
 for (int i = 0; i < maxN; i++) isPrime[i] = 1;
 
 isPrime[0] = isPrime[1] = 0;
 
 for (int i = 2; i * i < maxN; i++)
 {
  if (isPrime[i])
   for (int j = i * i; j < maxN; j += i)
    isPrime[j] = 0;
 }
 
 for (int i = 0; i < maxN; i++)
  if (isPrime[i])
   prime.push_back(i * 1LL);
 
 
 while (t--)
 {
  cin >> d;
  long long p, q = 1;
  for (int i = 0; i < prime.size(); i++)
   if (prime[i] - 1 >= d) {p = prime[i]; break;}
 
  for (int i = 0; i < prime.size(); i++)
   if (prime[i] - p >= d) {q = prime[i]; break;}
 
  cout << p*q << '\n';
 }
}
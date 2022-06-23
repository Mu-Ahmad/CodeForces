    #include<bits/stdc++.h>
    using namespace std;
    #define mem(a,b) memset(a,b,sizeof a) ;
    typedef pair<int,int> pii ;
    #define vi vector<int>
    #define vit vector<int> :: iterator 
    #define all(ans) ans.begin(),ans.end()
    #define ll long long 
    #define db double 
    #define ldb long double
    #define fl float
    #define rep(i,a,b) for(int i=a;i<b;i++)
    #define lrep(i,a,b) for(ll i=a;i<b;i++)
    //#define all(c) c.begin(),c.end()
    #define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
    #define mpr make_pair
    void solve()
    {
     
    int n; ll k,x; cin>>n>>k;
    map<ll,ll>mp;
    rep(i,0,n)
    {
       cin>>x;
       x%=k;
       if(x)
       mp[k-x]++;
    }
    map<ll,ll> :: iterator it;
    ll mx=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
       ll x = (it->second-1ll)*k + it->first; 
       mx=max(mx,x);
    }
     if(mx)
      {
      mx++;
      }
    cout<<mx<<"\n";
     
    return;
    }
    int main()
    {
    ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
    }
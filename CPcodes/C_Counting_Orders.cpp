
//F047_gunjan_agrawal
//gunjan agrawal
//insta id->_gunjan_agrawal_
// header files
//#include <bits/stdc++.h>

#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <set>
#include <iostream>
#define pi (3.141592653589)
#define M 1000000007
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define inint(x) int x; cin>>x;
#define inll(x) long long int x; cin>>x;
#define all(x) x.begin(), x.end()
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define B break
#define C continue
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repj(j,n) for(int j=0;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define pii pair<int,int>
#define vi vector<int>

ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
using namespace std;
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
void solve()
{
    ll n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    map<int,pair<int,int> >mp;
    rep(i,0,n){cin>>a[i];}
    sort(a.begin(),a.end());
    rep(i,0,n){ int x;cin>>x;mp[x].first++;} 
    for(auto i:mp)
    {
        i.second.second=n-(a.begin()-upper_bound(all(a),i.first));
    }
    ll ans=1;
    ll dec=0;
    for ( auto it = mp.rbegin(); it != mp.rend(); it++) {
        ans=ans*( nCr((it->second.second-dec),it->second.first));
        dec=dec+it->second.first;
    }
    cout<<ans<<endl;
}


int32_t main()
{
    fast
    //_GUNJAN_AGRAWAL_
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}
#include <bits/stdc++.h>

//F047_gunjan_agrawal
//gunjan agrawal
//insta id->_gunjan_agrawal_
#define pi (3.141592653589)
#define M 1e9+7
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define repj(j,n) for(int j=0;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define pii pair<int,int>
#define vi vector<int>

using namespace std;
vector<ll>v(100);

 ll calc(ll n)
 {    if(n==1)
 {
    return 1;
 }
    if(v[n]!=0)
    {
      return v[n];
    }
    else 
    {    int i=0,j=0;
         if(n%2==0){i=1;}
         if(n%3==0){j=1;}
         return calc(n-1)+(i*2)+(j*2)+1;
    }
 }

void solve()
{
 ll n;
 cin>>n;
 cout<<calc(n)<<endl;
}


int32_t main()
{
    fast
    //cooldude69.
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}
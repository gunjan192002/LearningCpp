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

void solve()
{
    int n;
    string c,k;
    cin>>c;
    cin>>k;
    map<char,int>m;
    m[c[0]]++;
    m[c[1]]++;
     m[k[0]]++;
    m[k[1]]++;
    if(m.size()==1){cout<<0<<endl;return;}
    if(m.size()==4){cout<<3<<endl;return;}
      if(m.size()==3){cout<<2<<endl;return;}
      if(m.size()==2){cout<<1<<endl;return;}
    
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
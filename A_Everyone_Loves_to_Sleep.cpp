#include <bits/stdc++.h>

//F047_gunjan_agrawal
//gunjan agrawal
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
    int n,h,m,temp1=-1,temp2=-1;
    cin>>n>>h>>m;
    pair<int,int>p[n];
    rep(i,n)
    {
        cin>>p[i].first;
        cin>>p[i].second;
    }
    sort(p,p+n);
    int hour=p[0].first,min=p[0].second;
    for(int i=0;i<n;i++)
    { 
        if (h=p[i].first)
        {
            if(m<p[i].second)
            {
              temp1=p[i].first;
              temp2=p[i].second;
              break;
            }
        }
       else  if(h<p[i].first)
        {
            temp1=p[i].first;
              temp2=p[i].second;
              break;
        }

    }
    if{}
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
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
 const int N=1e5+10;
 vector<int>ar(N); 
 int lis(int i)
 { 
     int  ans=1;
    for(int j=i-1;j>=0;j++) 
    {
        if(ar[j]<ar[i])
        {
            ans++;
        }
        else 
        continue ;
    }
    return ans ;
 }

void solve()
{
    int n,x,y,z=0;//z=count
    cin>>n;
    rep(i,n)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        z=max(z,lis(i));
    }
    cout<<z<<endl;
  
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
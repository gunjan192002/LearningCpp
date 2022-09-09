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
    int n,k,x=0,y=1,z;
    cin>>n;
    int ar[n],temp[n];
    rep(i,n)
    {
        cin>>ar[i];
        temp[i]=ar[i];
    }
    if(n==1)
    {
    cout<<-1<<endl;return;
    }
    sort(temp,temp+n);
    rep(i,n)
    {  if(ar[i]!=temp[i]){continue;}

         if((i==n-1)&&(temp[n-1]==ar[n-1]))
    {
        swap(temp[n-1],temp[n-2]);
    }
        
        if(ar[i]==temp[i]){swap(temp[i],temp[i+1]);}
    }
   for(auto x:temp)
   {
    cout<<x<<" ";
   }
   cout<<endl;
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
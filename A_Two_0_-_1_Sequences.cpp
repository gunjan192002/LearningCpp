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
    
    int n,m;
    cin>>n>>m;
   string ar,arr;
     cin>>ar;
     cin>>arr;
    if(n==m)
    {
        rep(i,n)
        {
            if(ar[i]!=arr[i])
            { cout<<"No\n";return;}
            
        }
        cout<<"YES\n";return;
    }
    else    //n>m
    {   
        int flag=1;
        for(int i=1;i<m;i++)
        {
            if(ar[n-m+i]!=arr[i]){flag=0;break;}
        }
        if(flag==0){ cout<<"NO\n";return;}
        else{
            rep(i,n-m+1)
            {
                if(arr[0]==ar[i]){cout<<"YES\n";return;}
            }
            cout<<"NO\n";return;
        }
    }
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
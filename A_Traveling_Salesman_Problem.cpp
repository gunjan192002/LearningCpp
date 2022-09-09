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
   int n, y1=0,y2=0,x1=0,x2=0,x,y;
   cin>>n;
   rep(i,n)
   {
        cin>>x>>y;
        if(x==0)
        {
            if(y<0)
            {
                y1=max(abs(y),y1);
            }
            else{
                 y2=max(abs(y),y2);
            }
        }
        if(y==0)
        {
             if(x<0)
            {
                x2=max(abs(x),x2);
            }
            else{
                x1=max(abs(x),x1);
            }
        }
   }
    cout<<(2*x1)+(2*x2)+(2*y1)+(2*y2)<<endl;
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
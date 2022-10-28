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
    int x,y;
    cin>>x>>y;
    if((x==1)&&(y==1))
    {
        cout<<0<<endl;return;
    }
    if((x==1)||(y==1))
    {
        if(x+y>3)
        {
            cout<<-1<<endl;return;
        }
        else cout<<1<<endl;return;
    }

    else 
    {   
        int t; if(abs(x-y)&1)
    {
        t=2*abs(x-y)-1;
    }
else {t=2*abs(x-y);}
    

       cout<<2*min(x,y)-2+t<<endl;
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
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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repj(j,n) for(int j=0;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int ar[n];
    rep(i,0,n)
    {
        cin>>ar[i];
    }
    if(n==1)
    {
        cout<<"YES\n";return;
    }
    else
    {   int i=0,count =0,cnt=0;
        while(i<n-1)
        {
            if(ar[i]+1==ar[i+1])
            {   
                i++;
            }
            else if(ar[i]+2==ar[i+1])
            {
                count++;
                if(count==3)
                {
                    cout<<"NO\n";return;
                }
                i=i+1;
            }
            else if(ar[i]+3==ar[i+1])
            {
                 cnt++; 
                 if(cnt==2)
                 {
                 cout<<"NO\n";return;
                 }
                 i=i+1;
            }
            else {
                cout<<"NO\n";return;
            }

        }
       
        if((1<=count)&&(1<=cnt))
        {
              cout<<"NO\n";return;
        }
        else
        cout<<"YES\n";return;
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
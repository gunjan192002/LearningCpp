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
    ll n;
    cin>>n;
    int ar[n];
    rep(i,n)
    {
        cin>>ar[i];
    }
    int mx=max(ar[0],ar[1]);
    int mn=min(ar[0],ar[1]);
    if(n<=2)
    {
        cout<<"YES"<<endl;
        return;

    }
    else 
    {
        for(int i=2;i<n;i++)
        {
            if((ar[i]>mn) && (ar[i])<mx)
            {
                cout<<"NO"<<endl;
                return;
            }
             if(ar[i]<=mn)
             {
                mn=(min(ar[i],mn));
             }
             else 
             {
            {
                mx=(max(ar[i],mx));
             }
             }

        }
    }
    cout<<"YES"<<endl;
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
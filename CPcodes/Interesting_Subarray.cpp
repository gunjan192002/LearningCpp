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

    ll n, mx=-1000000000,mn=1000000000;
    cin>>n;
    ll ar[n];
     rep(i,0,n)
     {
        cin>>ar[i];
        mx=max(mx,ar[i]);
         mn=min(mn,ar[i]);

     }
     if((0<=mn))
     {
        cout<<mn*mn<<" "<<mx*mx<<endl;return;
     }
     else if(mx<=0)
     {
       cout<<mx*mx<<" "<<mn*mn<<endl;return;
     }
     else 
     {
        cout<<mn*mx<<" "<<max(mn*mn,mx*mx)<<endl;return;
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
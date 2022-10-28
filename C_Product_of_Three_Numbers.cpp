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
    int x,k=2;
    cin>>x;
    map<int,int>m;
    while(x/k!=1)
    {
        if(x%k==0)
        {
            m[k]++;
             x=x/k;
        }
    }

   if(m.size()==1)
   {
    map<int,int>::iterator i=m.begin();
    if(6<=i->second)
    {
        cout<<"YES\n";return;
    }
    else cout<<"NO\n";return;
   }

   if(m.size()==2)
   { 
     map<int,int>::iterator i=m.begin();

    int sum=i->second;i++;
    sum=sum+i->second;
    if(4<=sum)
    {
             cout<<"YES\n";return;

    }
        else cout<<"NO\n";return;

   }

   if(3<=m.size())
   {
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
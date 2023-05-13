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
   set<int>mp;
   rep(i,0,n)
   {
    int x;
     cin>>x;
        mp.insert(x);
   }

   if(mp.size()>3)
   {
    cout<<-1<<endl;
    return;
   }
    if(mp.size()==1)
    {
        cout<<0<<endl;return;
    }
    int ar[3]; int j=0;
    for(auto i:mp)
    {
        ar[j]=i;
        j++;
    }
    if(mp.size()==2)
    {    
        cout<<ar[1]-ar[2]<<endl;return;
    }
    if(mp.size()==3)
    {  
        if(ar[0]+ar[2]==2*ar[1])
        {
            cout<<ar[1]-ar[0]<<endl;return;
        }
        else
    {
        cout<<-1<<endl;
    return;
    }
    }
   
}


int32_t main()
{
    fast
   
    solve();
    
    return 0;
}
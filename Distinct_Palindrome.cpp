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
   ll n,k;
   string a;
   cin>>n>>k;
   if((n&1)==1)
   {
      if(k<=(n/2)+1)
      {
        for(int i=0;i<n/2;i++)
        {
            if(i<=k-1)
            {
                a.push_back('a'+i);
            }
            else 
            {
                a.push_back('a');
            }
        }
        string temp=a;
        reverse(temp.begin(), temp.end());
              if(k==(n/2)+1){
                a.push_back('z');}
                else {a.push_back('a');}

        cout<<a+temp<<endl;
        return;

      }
      else 
      {
        cout<<-1<<endl;
        return;
      }
   }

   else 
   {  
     if(k<=(n/2))
      {
    for(int i=0;i<n/2;i++)
        {
            if(i<=k-1)
            {
                a.push_back('a'+i);
            }
            else 
            {
                a.push_back('a');
            }
        }
        string temp=a;
        reverse(temp.begin(), temp.end());
        cout<<a+temp<<endl;
        return;
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
    //cooldude69.
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}
#include <bits/stdc++.h>

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
    string n,s;
    int k;
    cin>>k;
    cin>>n;
    for(int i=0;i<n.size();i=i+2)
    {  
        if((n[i]=='0')&&(n[1+i]=='0'))
    {
       s.push_back('A');
    }
     else if((n[i]=='0')&&(n[i+1]=='1'))
    {
       s.push_back('T');
    }
    else  if((n[i]=='1')&&(n[i+1]=='0'))
    {
       s.push_back('C');
    }
     else  if((n[i]=='1')&&(n[i+1]=='1'))
    {
       s.push_back('G');
    }

    }
    cout<<s<<endl;

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
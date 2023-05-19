//#include <bits/stdc++.h>

#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <set>
#include <iostream>
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
    ll n;
     cin>>n;
     if(n==1)
     {
        cout<<1<<endl;
        return ;
     }
    ll ans=n*(n+1);
    ans=ans/2;
    if(ans%n==0)
    {
        cout<<-1<<endl;
        return ;
    }
    else 
    {
        cout<<n<<" ";
        cout<<n-1 <<" ";
        for(int i=1;i<=(n-2)/2;i++)
        {
            cout<<i*2<<" ";
            cout<<(n)-(1+2*i)<<" ";
        }
        cout<<endl;
        return;
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
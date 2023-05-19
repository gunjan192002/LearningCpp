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
    int n;
    cin>>n;
    int x=INT_MAX,y=INT_MAX,z=INT_MAX;
    int flag1=0;int flag2=0;
    int m;
    string st;
    rep(i,0,n)
    {
        cin>>m;
         cin>>st;
        if(st[0]=='1')
        {
            x=min(x,m);
            flag1=1;
        }
        if(st[1]=='1')
        {
            y=min(y,m);
            flag2=1;
        }
        if(st[0]=='1'&&st[1]=='1')
        {
            z=min(z,m);
        }
    }
   if(flag1==0||flag2==0)
   {
    cout<<-1<<endl;return;
   }
    cout<<min(x+y,z)<<endl;
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
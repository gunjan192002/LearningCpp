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
    ll n,t;
     cin>>n>>t;
     vector<int>time(n);
     vector<int>enter(n);
      rep(i,0,n)
      {
        cin>>time[i];
      }
        rep(i,0,n)
      {
        cin>>enter[i];
      }
      vector<pair<int,pair<int,int>>>sol(n);
      rep(i,0,n)
      { 
        sol[i]=make_pair(enter[i],make_pair(i,time[i]));
      }
      sort(sol.begin(),sol.end());
      for(int i=n-1;i>=0;i--)
      {
            if(sol[i].second.second+sol[i].second.first<=t)
            {
                cout<<sol[i].second.first+1<<endl;
                return ;
            }
      }
      cout<<-1<<endl;
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
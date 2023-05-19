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
// #define s second
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repj(j,n) for(int j=0;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

// create a weighted graph 
vector<pair<int,int>> g[100];
void diji(int s)
{
    vector<int> vis(100,0);
     vector<int> dist(100,INT_MAX);
      set<pair<int,int>>st;
        st.insert({0,s});
        dist[s]=0;
        while(st.size()>0)
        {
             auto node=* st.begin();
             int v=node.second;
             int d=node.first;
             st.erase(st.begin());
             if(vis[v]==1)
             {
                continue;
             }
             vis[v]=1; 
             for(auto child: g[v])
             {
                int child_v=child.first;
                int  wt=child.second;
                if(dist[v] +wt<dist[child_v])
                {
                    dist[child_v]=dist[v] +wt;
                    st.insert({dist[child_v],child_v});
                }
             }
        }
}

int32_t main()
{
    fast
    int n,m;
    for(int i=0;i<m;i++)
    {
        int x,y,m;
         cin>>x>>y>>w;
          g[x].push_back(make_pair(y,w));
    }
    diji(0)
}
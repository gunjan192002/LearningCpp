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
   
               
    vector<pair<int,int>>g(102);
    vector<int>vis(102,0);
    vector<int>dist(102,INT_MAX);
    void create(vector<vector<int>>& times)
    {
        for(auto i: times)
        {
           // g[i[0]].push_back(make_pair(i[1]),i[2]);
            g[i[0]]={i[1],i[2]};
        }
    }
    void diji(int s)
    {
        set<pair<int,int>> st;
        st.insert(make_pair(0,s));
        vis[s]=1;
        dist[s]=0;
        while(st.size()>0)
        {
             auto itv=*st.begin();
             int v=itv.second;
             int dist_v=itv.first;
             if(vis[v]==1)
             {
                continue;
             }
             vis[v]=1;
             st.erase(st.begin());
             for(auto child : g[v])
                {    int child_v=child.fist;
                     int child_wt=child.second;
                  
                    
                        if(dist_v+child_wt<dist[child_v])
                        {
                            dist[child_v]=dist_v+child_wt;
                            st.insert(make_pair(dist[child_v],child_v));
                        }
                    
                
            }    }
            }
int32_t main()
{
    fast
     // Creates a min heap
   vector<vector<int>> times={{{2,1,1},{2,3,1},{3,4,1}}};
   int n=4; int k=2;
   create(times);
   // diji(k);
    cout<<g[2].first<< " "<<g[2].second;
    return 0;
}
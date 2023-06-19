// _GUNJAN_AGRAWAL_ 
//insta id->_gunjan_agrawal_
//Leetcode-> https://leetcode.com/gunjan192002/
//LinekdIN->https://www.linkedin.com/in/gunjan-agrawal-537929229/
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <set>
#include <iostream>
#define pi (3.141592653589)
#define M 1000000007
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define inint(x) int x; cin>>x;
#define inll(x) long long int x; cin>>x;
#define all(x) x.begin(), x.end()
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define B break
#define C continue
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
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}

 bool isposs(int i,int j,int n)
    {
        if(i>=0&&j>=0&&i<n&&j<n)
        {
            return true;
        }
        return false ;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1){return -1;}
        int dx[]={-1,-1,-1,1,1,1,0,0};
        int dy[]={-1,0,1,-1,1,0,-1,1};
       // vector<vector<pair<int,int>>> parent(101,vector<pair<int,int>>(101));
        //for(int i=0;i<n;i++){for(int j=0;j<n;j++){ parent[i][j]={i,j};}}
        vector<vector<int>> vis(101,vector<int>(101,0));
        vector<vector<int>> lvl(101,vector<int>(101,1));
        queue<pair<int,int>>q1;
        q1.push({0,0});
         while(!q1.empty())
         {
            int i=q1.front().first;
            int j=q1.front().second;
            q1.pop();
            if(vis[i][j]==-1){continue;}
            else {vis[i][j]=-1;}
            if(i==n-1&&j==n-1){return lvl[i][j];}
            for(int d=0;d<8;d++)
            {
                int x=i+dx[d];int y=j+dy[d];
                if(isposs(x,y,n)&&grid[x][y]!=1)
                {
                    //cout<<"in"<<endl;
                    lvl[x][y]=lvl[i][j]+1;
                    q1.push({x,y});
                }
            }
         }
         return -1;}
int32_t main()
{
  
  vector<vector<int>> vc={
                          {0, 0, 0},
                          {0, 1, 0},
                          {0, 0, 0}};
   cout<<shortestPathBinaryMatrix(vc);

}
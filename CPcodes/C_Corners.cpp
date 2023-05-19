//F047_gunjan_agrawal
//gunjan agrawal
//insta id->_gunjan_agrawal_
// header files
//#include <bits/stdc++.h>

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

ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
using namespace std;
// I got to travel trhough the matrix 
void solve()
{
    // I have to search for two concecutive zero in the matrix  and it is only the way what I can do what I want to do
    int n,m; 
    cin>>n>>m; 
    string arr[n];
    int cnt=0;
    rep(i,0,n)
    {
       cin>>arr[i];
    }
    rep(i,0,n)
    {
       rep(j,0,m)
       {
        if(arr[i][j]=='1'){cnt++;}
       }
    }
    //cout<<cnt;
    if(cnt==(n*m)){cout<<cnt-2<<endl;return;}
    int dx[]={-1,-1,-1,0,0,1,1,1};
    int dy[]={-1,0,1,-1,1,-1,0,1};
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if(arr[i][j]=='0')
            {
               
                for(int d=0;d<8;d++)
                {
                        int x=i+dx[d];
                        int y=j+dy[d];
                        if(x>=0 && y>=0 && x<n && y<m && arr[x][y]=='0')
                        {
                           cout<<cnt<<endl;return;
                        }
                }
            }
        }
    }
    cout<<cnt-1<<endl;
}


int32_t main()
{
    fast
    //_GUNJAN_AGRAWAL_
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}
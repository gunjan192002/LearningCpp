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


void solve()
{
    int n;
    cin>>n; 
    vi a(n);
    int neg=0;int pos=0;
    rep(i,0,n)
    {
        cin>>a[i];
        if(a[i]>0){pos++;}
        if(a[i]<0){neg++;}
     }
        if(pos>=neg)
        {   if(neg&1){cout<<1<<endl;return;}
            cout<<0<<endl;return;
            }
        int cnt=0;
        while(neg>pos)
        {
            neg--;cnt++;pos++;
        }
        if(neg&1){cnt++;}
        cout<<cnt<<endl;
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
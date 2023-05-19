 
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

void solve()
{
int n;
    cin>>n;
    vi v(n);
     int bada_wala=0;
     int fake=0;
    rep(i,0,n){cin>>v[i];}
    rep(i,0,n){
        if(i==0) continue;
        if(v[i]>bada_wala){
            bada_wala=v[i];
            fake = i;
        }
    }

    vi res1(n);
    if(fake==n-1){
        res1[0]=bada_wala;
        for(int i=0;i<n-1;i++){
            res1[i+1]=v[i];
        }
    }

    vi res2(n);
    int count=0;
    for(int i=fake;i<n;i++){
        res2[i-fake]=v[i];
        count++;
    }

    int l=0,r=fake-2;

    res2[count++]=v[fake-1];
    while(l<=r){
        if(l==r){
            res2[count]=v[l];
            break;
        }
        if(v[l]>v[r]){
            for(int i=l;i<=r;i++){
                res2[count++]=v[i];
            }
            break;
        }else{
            res2[count++]=v[r--];
        }
    }

    int flag=0;
    rep(i,0,n){
        if(res1[i]>res2[i]){
        rep(j,0,n){cout<<res1[j]<<" ";;}
        cout<<endl;
            return;
        }else if(res1[i]<res2[i]){
            rep(j,0,n){cout<<res2[j]<<" ";;}
            cout<<endl;
            return;
        }
    }
     rep(j,0,n){cout<<res1[j]<<" ";}
     cout<<endl;
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

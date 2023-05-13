#include <bits/stdc++.h>

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
{   int n;
    cin>>n;
 
    if(n==1){
        cout<<"YES\n";
        cout<<"1 2"<<endl;
        return;
    }
 
    if(n%2==0){
        cout<<"NO\n";
        return;
    }
 
    cout<<"YES\n";
    
    vector<int>v(2*n);
    
    v[0] = 2*n;
    
    int l,r;
    l = 1;
    r = n;
    int num = 2*n-1;
    for(int i=0; i<n-1; i+=2){
        v[r++] = num--;
        v[r++] = num--;
        v[l++] = num--;
        v[l++] = num--;
    }
    v[2*n-1] = num;
 
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
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
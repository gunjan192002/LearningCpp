
#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>
#define arr(n); ll ar[n]; for(int i=0;i<n;i++) cin>>ar[i];

using namespace std;

void solution()
{
    int n;
    cin>>n;
    vector<string> v;
    rep(i,n) 
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    int k;
    cin>>k;
    map<pair<string,string>,int> mp;
    rep(i,k)
    {
        string a,b;int d;
        cin>>a>>b>>d;
        mp[make_pair(a,b)]=d;
    }
    int h;
    cin>>h;
    rep(i,h)
    {
        unordered_map<string,int> m;
        int p,len=0;
        bool flag=0;
        cin>>p;
        string l[p];
        rep(i,p)
        {
            cin>>l[i];
            cout<<l[i]<<endl;
            m[l[i]]++;
        }
        rep(i,p) 
        {
            auto it=find(v.begin(),v.end(),l[i]);
            if(it==v.end() ) 
            {
                flag=1;
                break;
            }
            if(m[l[i]]!=1) 
            {
                flag=1;
                break;
            }
        }
        rep(i,p-1)
        {
            if(mp[make_pair(l[i],l[i+1])]==0) 
            {
                flag=1;
                break;
            }
            else 
            len+=mp[make_pair(l[i],l[i+1])];
        }
        
        if(flag==1) cout<<"ERROR"<<endl;
        else cout<<len<<" 1 "<<endl;
    }
}


int32_t main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}
8
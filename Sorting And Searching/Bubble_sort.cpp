
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
void bs(int ar[],int n)
{
    rep(i,1,n)
    {
        for(int j=0;j<n-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                swap(ar[j],ar[j+1]);
            }
        }
    }
    rep(i,0,n)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

void solve()
{  
    int ar[]={9,8,4,5,6};
    int n=5;
    bs(ar,n);

}


int32_t main()
{
    
    solve();
    
    return 0;
}
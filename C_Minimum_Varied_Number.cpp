#include <bits/stdc++.h>

//F047_gunjan_agrawal
//gunjan agrawal
#define pi (3.141592653589)
#define M 1e9+7
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define repj(j,n) for(int j=0;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

void solve()
{   int n; int i=9;
stack<int>s;
    cin>>n;
    if(n<=9)
    {
        cout<<n<<endl;
    }
    else{
    
    while(n-i!=0)
    {
         s.push(i);
         n=n-i;
         if(n<i){s.push(n);break;}

         else {i--;}
    }
      while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
    cout<<endl;

    }
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
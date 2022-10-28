#include <bits/stdc++.h>

// F047_gunjan_agrawal
// gunjan agrawal
// insta id->_gunjan_agrawal_
#define pi (3.141592653589)
#define M 1e9 + 7
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repj(j, n) for (int j = 0; j < n; j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x, y) fixed << setprecision(y) << x
#define pii pair<int, int>
#define vi vector<int>

using namespace std;
bool isprime(ll k)
{
    for (int i = 2; i < k / 2; i++)
    {
        if (k % i == 0)
            return 0;
    }
    return 1;
}

void solve()
{
     int n;
	    cin>>n;
	    int a[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            a[i][j]=0;
	        }
	    }
	    for(int i=0;i<n-1;i++){
	        a[i][i]=1;
	       if(i+1<n)  a[i][i+1]=1;
	    }
	    a[n-1][0]=1; a[n-1][n-1]=1;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }
}

int32_t main()
{
    fast
        // cooldude69.
        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
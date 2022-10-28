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
#define rep(i,n) for(int i=0;i<n;i++)
#define repj(j,n) for(int j=0;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

void solve()
{
     ll n;
        cin >> n;
        vi s(n), p(n);
        for (ll i = 0; i < n; ++i)
            cin >> s[i];

        ll l = 0, r = 0;
        bool ans = true;
        for (ll i = 0; i < n; ++i)
            p[i] = i + 1;

        while (r < n)
        {
            while (r < n - 1 and s[r] == s[r + 1]) // get range [l,r] with equal values
                ++r;
            if (l == r)
                ans = false;
            else
                rotate(p.begin() + l, p.begin() + r, p.begin() + r + 1); // rotate right in range [l,r]
            l = r + 1;
            ++r;
        }
        if (ans)
        {
            for (int i=0;i<n;i++)
                cout << p[i] << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
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
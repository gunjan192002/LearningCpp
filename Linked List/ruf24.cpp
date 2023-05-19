//#include <bits/stdc++.h>

#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <set>
#include <iostream>
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
vector<int> prime(int n)
{
    vector<int>arr;
    while (n % 2 == 0)
    {
       arr.push_back(2);
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
       
        while (n % i == 0)
        {
            arr.push_back(i);
            n = n/i;
        }
    }
    return arr;
    
}

void solve()
{
    int n,k;
    cin>>n>>k;
    if(((n%k)==0))
    {
        cout<<"NO"<<endl;return;
    }
    vector<int>arr=prime(n);
    if(n>k)
    {
        int ans=1;
        for(int i=0;i<arr.size();i++)
        {
            ans=ans*arr[i];
            if(ans<k)
            {
                cout<<"NO"<<endl;return;
            }
        }
    }
    cout<<"YES"<<endl;
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
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

bool ismirror(string a,string b,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[n-1-i])return false;
        else continue;

    }
    return true;
}


int32_t main()
{
    fast string a="gun",b="nug";
   cout<<ismirror(a,b,3);

    return 0;
}
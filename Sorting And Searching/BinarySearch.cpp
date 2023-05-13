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

int bs(vector<int>ar,int x)
{
      int i=0;
      int end=ar.size()-1;
      int  mid=(end+i)/2;
      while(i<=end)
      {   
        if(ar[mid]==x)
      {
        return mid;
      }
        else if(ar[mid]<x)
         {
            i=mid+1;
         }
         else 
         {
            end=mid-1;
         }
         mid=i+((end-i)/2);
      }
      return -1;
}
 
int32_t main()
{
    fast
    //cooldude69.
 vector<int>ar{0,0,0,0};
 int x=0;
   cout<<bs(ar,0,ar.size()-1,x);
    return 0;
}       f
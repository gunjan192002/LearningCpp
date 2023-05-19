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
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
int findGCD(vector<int>arr, int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}
 
bool palindrome(vector<int>arr, int n)
{
    int flag = 0;
    for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
       
       return 0;
    else
        return 1;
}
void solve()
{
    int n;cin>>n;
    vector<int>vc(n);
     rep(i,0,n)
     {
        cin>>vc[i];
     }
     if(palindrome(vc,n))
     {
        cout<<0<<endl;return;
     }
     //agar wo already pallindorme raha toh x kitna bhi bada le sakte h 
     ll mx=INT_MIN;
     vector<int>remain;
     
        for (int i = 0; i <=n / 2 && n != 0; i++) {
             int k=abs(vc[i]-vc[n-i-1]);
            if(k==0)
            {
                continue;
            }
            remain.push_back(k);
    }
     cout<<findGCD(remain,remain.size())<<endl;
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
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
void conq(int &ar[],int si,int e)
{
    int mergerd[e-si+1];
    int indx1=si;
   int  indx1=mid+1;
     int x=0;
    
} 
void divide(int &ar[],int si,int e)
{
    if(si>=e)
    {
        return;
    }
    int mid=s-(e-s)/2;
    divide(ar,si,mid);
    divide(ar,mid+1,e);
    conq(ar,si,mid)
}



int32_t main()
{
    fast
    int ar[10]={1,2,3,4,5,6,5};
    divide(ar,0,9)
    return 0;
}
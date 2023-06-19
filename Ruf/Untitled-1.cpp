// _GUNJAN_AGRAWAL_ 
//insta id->_gunjan_agrawal_
//Leetcode-> https://leetcode.com/gunjan192002/
//LinekdIN->https://www.linkedin.com/in/gunjan-agrawal-537929229/
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <set>
#include <iostream>
#define pi (3.141592653589)
#define M 1000000007
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define inint(x) int x; cin>>x;
#define inll(x) long long int x; cin>>x;
#define all(x) x.begin(), x.end()
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define B break
#define C continue
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
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
// max heap
  class heap
  {
    private:
    int arr[100];
    int size;
    public:
    heap()
    {
        size=0;
        arr[0]=-1;
    }
    void insert(int x)
    {   
        arr[size+1]=x;
        size++;
        int ind=size;
       while(ind>1)
       { 
        if(arr[ind/2]<arr[ind])
       {
        swap(arr[ind],arr[ind/2]);
        ind=ind/2;
       }
       else break;
       }
    }
    void pop()
    {
        
    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
  };
int32_t main()
{      
    heap obj;
    obj.insert(10);
    obj.insert(30);
    obj.insert(103);
    obj.insert(13);
    obj.insert(102);
    obj.insert(17);
    obj.insert(19);
    obj.print();
}
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
//#define pi (3.141592653589)
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

//{ Driver Code Starts
//#include <bits/stdc++.h>
//using namespace std;

// vector<long long> printFirstNegativeInteger(long long int arr[],
//                                              long long int n, long long int k);

// Driver program to test above functions
// int main() {
//     long long int t, i;
//     cin >> t;
//     while (t--) {
//         long long int n;
//         cin >> n;
//         long long int arr[n];
//         for (i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         long long int k;
//         cin >> k;

//         vector<long long> ans = printFirstNegativeInteger(arr, n, k);
//         for (auto it : ans) cout << it << " ";
//         cout << endl;
//     }
//     return 0;
// }

// } Driver Code Ends


void del(queue<int>&q)
{
    while(!q.empty()&&(q.front())>=0)
    {
        q.pop();
    }
}
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int n, long long int k) {
                queue<int>q;
                 //to only push k elements and remove going brute force way now 
                 for(int i=0;i<k-1;i++)
                 {
                     q.push(A[i]);
                 }
                 //del(q);
                 vector<long long> ans;
                 
                    del(q);
                 return ans;
 }
 


int32_t main()
{
    fast
   long long int A[]={1,2,3,-4,-2,-3,1};
//    queue<int>q;
//          for(int i=0;i<2;i++)
//                  {
//                      q.push(A[i]);
//                  }
//        // del(q);
//          while(!q.empty())
//          {
//             cout<<q.front();
//             q.pop();
//          }
    long long int n=7;
     long long int k=3;
    vector<long long>ans =printFirstNegativeInteger(A,n,k);
    return 0;
}
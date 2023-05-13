// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include<algorithm>
#include <map>

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

void solve()
{
string sexy;
    cin>>sexy;
    int xoxo,lolo,ditto;


    
    for(int i=1;i<sexy.size()-1;i++){ string ass = sexy.substr(0,i);
                                                        string boobs = sexy.substr(i,1); string chut = sexy.substr(i+1);
        
        if( (ass<=boobs && chut<=boobs)||(ass>=boobs && chut>=boobs)  ) {
            
            cout<<ass<<" "<<boobs<<" "<<chut<<endl;





            return;
        }
    }
    string ass= sexy.substr(0,1);string chut= sexy.substr(sexy.size()-1,1);
 string boobs = sexy.substr(1,sexy.size()-1);
 if((ass<=boobs && chut<=boobs)||(ass>=boobs && chut>=boobs)) {
            cout<<ass<<" "<<boobs<<" "<<chut<<endl;
            return;
    }

    cout<<":("<<endl;
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
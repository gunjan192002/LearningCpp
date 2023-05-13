#include <bits/stdc++.h>


#define pi (3.141592653589)
#define MOD 1e9+7
#define ll long long int
#define all(x) x.begin(), x.end()
#define loop(a, b) for(int i = a; i < b; i++)
#define loop1(a, b) for(int j = a; j < b; j++)
#define inint(x) int x; cin >> x;
#define inarr(x, n) int x[n]; loop(0, n){cin >> x[i];}
#define inll(x) ll x; cin >> x;
#define instr(x) string x; cin >> x; 
#define printc(cont) for(auto x : cont) cout << x << ' '; cout << '\n';
#define printp(cont) for(auto x : cont) cout << x.first << ' ' << x.second << '\n';
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pii pair<int,int>
#define vi vector<int>
#define pb push_back
#define mp make_pair

using namespace std;

bool comp(pair<string,int> a, pair<string,int> b){
    return a.second < b.second;
}

void solve(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    ll n=s1[s1.length()-1],m=s2[s2.length()-1];
    for(int i=s1.length()-2;i>0;i--)
    {
        n=n+s1[i]*10;
    }
     for(int i=s2.length()-2;i>0;i--)
    {
        
        m=m+s2[i]*10;
    }
    cout<<n*m<<endl;
}

int main()
{
    fast;
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}a
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

void solve(){
    ll n, k;
    cin >> n >> k;
    int msb = 32;
    pre(i, 31, 0){
        if(CheckBit(k, i)){
            msb = i;
            break;
        }
    }
    int cnt = 1;
    if(n==1){
        cout << k << endl;
        return;
    }
    if(msb!=0){
        ll x = 1<<(msb);
        x--;
        cout << x << " ";
        cout << k-x << " ";
        n-=2;
        while(n--) cout << "0 ";
        cout << endl;
        return;
    }
    cout << 1 << " ";
    n--;
    while(n--){
        cout << "0 ";
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while(t--){solve();}
    return 0;
}
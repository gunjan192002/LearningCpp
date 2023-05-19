#include<bits/stdc++.h>
using namespace std;

typedef bool                   boo;
typedef int                    li;
typedef long                   il;
typedef unsigned long          ul;
typedef long long int          ll;
typedef unsigned long long     ull;
typedef double                 dd;
typedef string                 str;

#define vli                    vector < li >
#define vll                    vector < ll >
#define sli                    set < li >
#define sll                    set < ll >
#define pli                    pair < li , li >
#define pll                    pair < ll , ll >
#define vpi                    vector < pair < li , li > >
#define vpl                    vector < pair < ll , ll > >
#define mpl                    map < ll , ll >

#define Test                   ll t; std :: cin >> t; while(t--)
#define input(a , n)           for( int i = 0 ; i < n ; i++ ) std :: cin >> a[i];
#define lp(a , i , b)          for( ll i = a ; i < b ; i++ )
#define rlp(a , i , b)         for( ll i = a; i >= b ; i-- )
#define sz(x)                  x.size()
#define len(z)                 z.begin() , z.end()
#define ci(x)                  std :: cin >> x;
#define co(x)                  std :: cout << x nl;
#define fix(x)                 fixed << setprecision(x)
#define mem(z , l)             memset( z , l , sizeof(z) )
#define MP                     make_pair
#define pb                     push_back
#define F                      first
#define S                      second
#define nl                     << endl;
#define nll                    std :: cout << endl;
#define cy                     std :: cout << "YES" << endl;
#define cn                     std :: cout << "NO" << endl;
#define rn                     return;
#define Good_Bye               return 0;
#define gcd(a , b)             __gcd( a , b )
#define lcm(a , b)             ( a * ( b / gcd( a , b ) ) )
#define Faster                 ios_base :: sync_with_stdio( 0 ); cin.tie( 0 ); cout.tie( 0 );
int dx[]={0,1};
int dy[]={1,0};
int dx1[]={-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy1[]={-1, 0, 1, -1, 0, 1, -1, 0, 1};             

const double eps =             1e-9;
const int inf =                2000000000;
const ll infLL =               9000000000000000000;
const ll MOD =                 1e9+7;
const double PI =              3.141592653589793238462643383279;
const int N = 1e5+1;
///_____________________________________________ L E T ' S  B E G I N ________________________________________________________

ll fac[N],inv[N];

long long modpow(long long x, long long y, long long p) {
    long long ret = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            ret = (ret * x) % p;
        }
        y /= 2;
        x = (x * x) % p;
 
 
 
    }
    return ret;
} 


void solve()
{
   fac[0] = inv[0] = 1;
   for (int i = 1; i < N; i++) {
       fac[i] = (i * fac[i - 1]) % MOD;
       inv[i] = modpow(fac[i], MOD - 2, MOD);

  }
}

int main() {
  // your code goes here
  solve();
      long long n;
      cin>>n;
      map<long long,long long> m;
      for(long long j=0;j<n;j++)
      {
          long long x,y;
          cin>>x>>y;
          ++m[x];
      }
      long long p=1;
      for(map<long long,long long>::iterator itr=m.begin();itr!=m.end();itr++)
      {
          p=(p*(fac[itr->second]%MOD))%MOD;
      }
      cout<<(p*inv[n])%MOD<<"\n";
  return 0;
}
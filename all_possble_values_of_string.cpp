#include <bits/stdc++.h>
using namespace std;
int ar[10];
    string s ="radhaa";


void q( int n)
{
  if(n<1)cout<<s<<endl;
  else 
  {
    s[n-1]='1';
    q(n-1);
    s[n-1]='0';
    q(n-1);
  }
}

int main()
{
   
  cout<<sizeof(s);
    return 0;
}
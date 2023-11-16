#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
    while(t--)
    {
    	int n,k;
		int ans=0,mum=0;
    	cin>>n>>k;
    	int a[n],h[n],l,r;
    	for(int i=0;i<n;i++) cin>>a[i];
    	for(int i=0;i<n;i++) cin>>h[i];
    	for(int l=0,r=0;r<n;r++)
    	{
    		if(h[r-1]%h[r]==0) ans+=a[r];
    		else l=r,ans=a[l];
    		while(ans>k) ans-=a[l++];
    		mum=max(mum,r-l+1);
    	}
    	cout<<mum<<endl;
    }
	return 0;
}
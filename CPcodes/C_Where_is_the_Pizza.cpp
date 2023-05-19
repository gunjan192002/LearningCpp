#include <bits/stdc++.h>
using namespace std;
int a[500010],b[500010],t[500010],dis[500010],f[500010];
int main()
{
	int q;scanf("%d",&q);while(q--)
	{
		int n,tmp,ans=1;scanf("%d",&n);
         for(int i=1;i<=n;i++) scanf("%d",&a[i]); 
         for(int i=1;i<=n;i++) scanf("%d",&b[i]);
          for(int i=1;i<=n;i++) scanf("%d",&tmp),t[tmp]=1;
		for(int i=1;i<=n;i++) f[a[i]]=b[i];
		for(int i=1;i<=n;i++) if(!dis[i])
		{
			int flag=1;
			for(int j=f[i];j!=i;j=f[j])
			{
				if(t[j]) flag=0;
				dis[j]=1;
			}
			if(flag&&!t[i]&&f[i]!=i) ans=ans*2%1000000007;
		}
		printf("%d\n",ans);
		for(int i=1;i<=n;i++) t[i]=dis[i]=0;
	}
}

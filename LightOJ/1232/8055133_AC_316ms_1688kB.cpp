#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	100000007
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;


int main()
{
	int cas=1,test;
	sf("%d",&test);
	while(test--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int con[n+1];
		for(int i=0;i<n;i++)
		{
			sf("%d",&con[i]);


			//cout<<con[i]<<endl;
		}
		li sum[k+1];

		memset(sum,0,sizeof sum);

		sum[0]=1;

		for(int i=0;i<n;i++)
		{
			for(int j=1;j<=k;j++)
			{
				int store=j/con[i];
				if(j>=con[i])
				{
					sum[j]=sum[j-con[i]]+sum[j];

					sum[j]=sum[j]%m;



					//cout<<sum[j]<<endl;
				}
			}
		}
		printf("Case %d: %d\n",cas++,sum[k]);
	}




return 0;
}

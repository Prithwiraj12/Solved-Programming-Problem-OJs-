#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;
int n;
int weights[30][10];
int dp[30][10];

int go(int index,int collum)
{
	if(index==n-1)
	{
		return weights[index][collum];
	}
	if(dp[index][collum]==-1)
	{
		int store=INT_MAX;

		for(int i=0;i<3;i++)
		{
			if(i==collum)continue;
			store=min(store,weights[index][collum]+go(index+1,i));
		}
		dp[index][collum]=store;

	}
	return dp[index][collum];
}

int main()
{
	int t,cas=1;
	sf("%d",&t);
	while(t--)
	{
		memset(dp,-1,sizeof dp);
		sf("%d",&n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<3;j++)
			{
				sf("%d",&weights[i][j]);
			}
		}
		int res=INT_MAX;
		for(int i=0;i<3;i++)
		{
			res=min(res,go(0,i));
		}
		printf("Case %d: %d\n",cas++,res);

	}




return 0;
}

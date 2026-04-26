#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	10467399
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;
int ara[m];
int prime[m/2+7];
int len=0;
void sieve()
{
	for(int i=3;i*i<=m;i+=2)
	{
		if(ara[i]==0)
		{
			for(int j=i*i;j<=m;j+=2*i)
			{
				ara[j]=1;
			}
		}
	}
	prime[++len]=2;
	for(int i=3;i<=m;i+=2)
	{
		if(ara[i]==0)
		{
			prime[++len]=i;
		}
	}
}

int primefact(int n)
{
	int b=n,cnt=0;
	for(int i=1;prime[i]*prime[i]<=n ; i++)
	{
		//cout<<prime[2]<<endl;
		if(b%prime[i]==0)
		{
			//cout<<1<<endl;
			cnt++;
			while(b%prime[i]==0)
			{
				b=b/prime[i];
				//cout<<b<<endl;
			}
		}
	}
	if(b>1)cnt++;
	//cout<<cnt<<endl
	return cnt;
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	sieve();
	int n;
	sf("%d",&n);
	int res=primefact(n);
	if(res==3)pf("YES\n");
	else pf("NO\n");



return 0;
}

#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	mi   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;

int ara[1001];
int main()
{
	int n,m,x,y,z;
	sf("%d %d",&n,&m);
	while(m--)
	{
		sf("%d %d",&x,&y);
		ara[x]=1;
		ara[y]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(ara[i]==0)
		{
			z=i;
			break;
		}
	}
	cout<<n-1<<endl;
	for(int i=1;i<=n;i++)
	{
		if(i!=z)
		{
			pf("%d %d\n",z,i);
		}
	}




return 0;
}

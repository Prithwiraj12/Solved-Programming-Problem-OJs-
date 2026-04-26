#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;


int main()
{
	int test,n,ara[110];
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&ara[i]);
		}
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(i==n-1)break;
			//cout<<ara[i]<<" "<<ara[i+1];
			if(ara[i]>ara[i+1])
			{
				cnt++;
			}
			//if(ara[i+1]==n-1)break;
		}
		int x=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(ara[i]>ara[j])x++;
			}
		}
		//cout<<cnt<<" "<<x<<endl;
		if(cnt==x)pf("YES\n");
		else pf("NO\n");
	}




return 0;
}

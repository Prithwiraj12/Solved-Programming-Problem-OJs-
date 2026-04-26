#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;
int arra[100005];

int main()
{
	int test;
	sf("%d",&test);
	while(test--)
	{
		int n,ara[100005];
		sf("%d",&n);


		memset(arra,0,sizeof(arra));
		int x=0;
		for(int i=0; i<n;i++)
		{
			sf("%d",&ara[i]);

			if(arra[ara[i]]==0)
			{x++;
			arra[ara[i]]=1;
			}
		}
		cout<<x<<endl;

	}




return 0;
}

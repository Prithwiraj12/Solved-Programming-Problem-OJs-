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
	int a,b,c,x;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=0;;i++)
	{
		x=c-(a*i);
		if(x<0)
		{
			cout<<"NO"<<endl;
			break;
		}
		if(x%b==0)
		{
			cout<<"YES"<<endl;
			break;
		}
		

	}




return 0;
}

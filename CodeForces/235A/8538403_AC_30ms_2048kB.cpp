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
    li n;
    sf("%lld",&n);
    if(n%2==1&&n>=3)
	{
		pf("%lld\n",(n*(n-1)*(n-2)));
	}
	else if(n>=4&&n%3!=0&&n%2==0)
	{
		pf("%lld\n",(n*(n-1)*(n-3)));
	}
	else if(n%2==0&&n%3==0)
	{
		pf("%lld\n",((n-1)*(n-2)*(n-3)));
	}
	else if(n<=2) pf("%lld\n",n);



return 0;
}

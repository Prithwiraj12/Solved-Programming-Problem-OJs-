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
	li red,blue,n,t;
	sf("%lld",&n);
	red=1,blue=0;
	for(int i=1;i<n;i++)
	{
		t=red;
		red=red+blue;
		blue=t;
	}
	li res=2*red;
	printf("%lld\n",res);




return 0;
}

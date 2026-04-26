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
	int n;
	sf("%d",&n);
	if(n<=2)cout<<-1<<endl;
	else
	{
		for(int i=n;i>=1;i--)
		{
			cout<<i;
			if(i!=1)cout<<" ";
		}
		cout<<endl;
	}




return 0;
}

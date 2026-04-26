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
	int n1,n2,k1,k2,i,j,x,y;
	sf("%d %d %d %d",&n1,&n2,&k1,&k2);
	if(n1>n2)cout<<"First"<<endl;
	else if(n1<n2)cout<<"Second"<<endl;
//else if(k1>k2)cout<<"First"<<endl;
	else if((k1<k2&&n1==n2)||(k1>k2&&n1==n2)||(k1==k2&&n1==n2))cout<<"Second"<<endl;


return 0;
}

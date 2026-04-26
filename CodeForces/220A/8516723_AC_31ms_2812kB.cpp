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
	int ara[n+1],arra[n+1];
	for(int i=0;i<n;i++){sf("%d",&ara[i]);
	arra[i]=ara[i];}
	sort(arra,arra+n);
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(arra[i]!=ara[i])cnt++;
	}
	if(cnt>2)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;




return 0;
}

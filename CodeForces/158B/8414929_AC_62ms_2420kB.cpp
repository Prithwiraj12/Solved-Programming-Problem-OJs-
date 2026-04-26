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
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
	{
		scanf("%d",&ara[i]);
	}
    double cnt=0,x=0,y=0,z=0,k;
    for(int i=0; i<n; i++)
    {
        if(ara[i]==4)cnt++;
        else if(ara[i]==3)z++;
        else if(ara[i]==2)y++;
        else if(ara[i]==1)x++;
    }

    if(x==z)
    {
        cnt=cnt+(((x*1)+(z*3))/4);
    }
    else if(z>x)
	{
		cnt=cnt+(((x*1)+(x*3))/4);
		cnt=cnt+(z-x);
	}
	else if(x>z)
	{
			cnt=cnt+(((z*1)+(z*3))/4);
			k=x-z;
	}
	cnt=ceil(((k*1)+(2*y))/4+cnt);
	cout<<cnt<<endl;


    return 0;
}

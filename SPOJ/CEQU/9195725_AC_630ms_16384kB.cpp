#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	mf   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;

int gcd(int m,int n)
{
	if(n==0)return m;
	return	gcd(n,m%n);
}

int main()
{
	int test,cas=1,a,b,c,str;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d %d",&a,&b,&c);

        int z=abs(a);
        int y=abs(b);
        int x=gcd(z,y);
        //cout<<z<<endl;
         printf("Case %d: ",cas++);
        if(c%x==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        //cout<<z<<endl;
    }
    return 0;




return 0;
}

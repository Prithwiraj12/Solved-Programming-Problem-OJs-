#include<bits/stdc++.h>
#define k .0000001
using namespace std;

long long sod(long long a,long long b)
{
	long long x,y,z;
	x=((pow(a,(b+1))-1+k))/(a-1);
	return x;
}
int main()
{
    long long a,b,c,n,m,v,g;
    scanf("%lld",&g);
    while(g--){
			b=0,n=1;
    scanf("%lld",&a);
    v=a;
    for(int i=2;; i++)
    {
		c=0;
        while(a%i==0)
        {
            a=a/i;
            c++;
        }

        if(c!=0){
			m=sod(i,c);
			n=m*n;
        }
         if(a==1)break;
    }
    printf("%lld\n",n-v);}
}

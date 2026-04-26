#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define m 1000000007
#define si 55000
#define lim 50030
#define siz 50150
using namespace std;

int ara[siz+5];
int prime[siz/2+5];
int len=-1;
void sieve()
{
	for(int i=3;i*i<=lim;i+=2)
	{
		if(ara[i]==0)
		{
			for(int j=i*i;j<=lim;j+=2*i)
			{
				ara[j]=1;
			}
		}
	}
	prime[++len]=2;
	for(int i=3;i<=lim;i+=2)
	{
		if(ara[i]==0)
		{
			prime[++len]=i;
		}

	}
	return;
}


int fun(int x,int n)
{
    int temp,d=0;

    for(int i=x; i<=n; i+=x)
    {
        temp=i;
        if(temp%x==0)
        {
            while(temp%x==0)
            {
                ++d;
                temp/=x;
            }
        }
    }

    return (d+1);
}

int main()
{
	sieve();
	int test,num,e;
	long long int ans;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&num);
		ans=1;
		for(int i=0;prime[i]<=num;i++)
		{
			e=fun(prime[i],num);
			ans=(ans*e)%m;
		}
		printf("%lld\n",ans);
	}
	return 0;
}























/*{
    sieve();

    int a,b,c,i,e,f,x=1;
    long long int ans;
    sf("%d",&a);
    while(a--)
    {
        sf("%d",&b);
        ans=1;
        for(int i=0; prime[i]<=b; i++)
        {
            e=fun(prime[i],b);
            ans = (ans*e)%m;
        }

        printf("%lld\n",ans);
    }
    return 0;
}*/


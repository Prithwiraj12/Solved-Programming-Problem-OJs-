#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ul unsigned long long int
#define siz 10002
using namespace std;

int ara[siz];
int prime[siz/2+7];
int len=0;
void sieve()
{
    int i,j,a,b;

    for(i=3; i*i<=siz; i+=2)
    {
        if(ara[i]==0)
        {
            for(j=i*i; j<=siz; j+=2*i)
            {
                ara[j]=1;

            }
        }
    }

    prime[++len]=2;
    for( i=3; i<=siz; i+=2)
    {
        if(ara[i]==0)
        {
            prime[++len]=i;
        }
    }
    return;
}


int fun(int x)
{

    int temp=x,c=0;
    for(int i=1; prime[i]*prime[i]<=temp; i++)
    {
        if(x%prime[i]==0)
        {
            ++c;
            while(x%prime[i]==0)
            {
                x/=prime[i];
            }
        }

    }
    if(x>1)
        ++c;
    if(c>=3)
        return 1;
    return 0;

}

int main()
{
    sieve();
    int lucky[5000],k=0;
    for(int i=30;; i++)
    {
    	int z=fun(i);
        if(z==1)
        {
            lucky[++k]=i;
            if(k==1000)
                break;
        }
    }
    int a,b;

    scanf("%d",&a);

    while(a--)
    {
        scanf("%d",&b);
        printf("%d\n",lucky[b]);
    }
    return 0;
}


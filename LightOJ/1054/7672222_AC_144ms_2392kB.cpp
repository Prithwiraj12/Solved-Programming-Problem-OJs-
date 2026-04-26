#include<bits/stdc++.h>
#define siz 60000
#define w 1000000007
#define ul unsigned long long int
using namespace std;
unsigned long long ara[siz];
unsigned long long prime[siz/2+7];
unsigned long long len=0;

void sieve()
{
    unsigned long long i,j,a,b;

    for(i=3; i*i<=46700; i+=2)
    {
        if(ara[i]==0)
        {
            for(j=i*i; j<=46700; j+=2*i)
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
ul bigmod(ul x,ul y)
{
    ul b,store;
    if(y==0)
        return 1;
    if(y==1)
        return (x)%w;

    if(y%2==1)
    {
        b=bigmod(x,y-1)%w;
        return ((b*x)%w);
    }

    if(y%2==0)
    {
        store=bigmod(x,y/2)%w;
        return (store*store)%w;
    }
}
int main()
{
    sieve();
    unsigned long long num,b,c,n,m,v,g,o,x,k,a,l=1,temp;
    scanf("%llu",&g);
    while(g--)
    {
        b=0,n=1;
        scanf("%llu %llu",&num,&o);
        v=num;
        for(unsigned long long i=1; i<=len && prime[i]*prime[i]<=v; i++)
        {
            c=0;
            if(num%prime[i]==0)
            {
                c=0;
                while(num%prime[i]==0)
                {
                    c++;
                    num/=prime[i];
                }

                m=bigmod(prime[i],(c*o)+1);
                a=(m-1+w)%w;
                k=bigmod(prime[i]-1,w-2);
                temp=(a*k)%w;
                n=(temp*n)%w;
            }

        }

        if(num!=1)
        {
            c=1;
            m=bigmod(num, (c*o)+1);
            a=(m-1+w)%w;
            k=bigmod(num-1, w-2);
            temp=(a*k)%w;
            n=(temp*n)%w;
        }
        x=n%w;
        printf("Case %llu: %llu\n",l++,x);
    }
}


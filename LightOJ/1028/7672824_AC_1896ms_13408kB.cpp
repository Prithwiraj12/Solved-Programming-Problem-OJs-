#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define siz 1000100
using namespace std;
long long int ara[siz+5];
long long int prime[siz/2+5];
long long int len=0;
void sieve()
{
    long long int i,j;
    for(i=3; i*i<=siz; i+=2)
    {
        if(ara[i]==0)
        {
            for(j=i*i; j<=siz ; j+=2*i)
            {
                ara[j]==1;
            }
        }
    }
    prime[++len]=2;
    for(i=3; i<=siz; i+=2)
    {
        if(ara[i]==0)
        {
            prime[++len]=i;

        }
    }

    return;
}
int main()
{
    sieve();
    long long int a,b,c,d,i,e,f,x=1;
    sf("%lld",&a);
    while(a--)
    {
        sf("%lld",&b);
        c=b,e=1,f=0;
        for(i=1; i<=len && prime[i]*prime[i]<=b; i++)
        {
            if(b%prime[i]==0)
            {
                d=0;
                while(b%prime[i]==0)
                {
                    d++;
                    b/=prime[i];
                    //cout<<d<<endl<<prime[i]<<endl;
                }

				 e=(d+1)*e;

            }

            //cout<<d<<endl;

        }
        if(b>1)
        {
            e=e*2;
        }

       printf("Case %lld: %lld\n",x++,e-1);
    }
    return 0;
}


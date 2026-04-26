#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ul unsigned long long int
#define siz 87000000
using namespace std;
int ara[siz];
int prime[siz/2];
int len=0;

void sieve()
{
    int i,j,a,b;
    //b=sqrt(siz);
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
    for(int i=3; i<=siz; i+=2)
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
    int a,b,c,d;
    sf("%d",&a);
    while(a--)
    {
        sf("%d",&b);
        pf("%d\n",prime[b]);
    }



    return 0;
}


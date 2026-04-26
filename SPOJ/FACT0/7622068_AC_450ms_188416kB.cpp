#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ul unsigned long long int
#define siz 31622800
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


int main()
{
    sieve();

    long long int num,temp;
    int flag=0;
    int c;
    while(scanf("%lld",&num)!=EOF)
    {
        if(num==0)
            break;
        temp=num,flag=0;
        for(int i=1; prime[i]*prime[i]<=temp && prime[i]<31622779; i++)
        {

            if(num%prime[i]==0)
            {
                c=0;
                while(num%prime[i]==0)
                {
                    c++;
                    num/=prime[i];
                }
                if(c>0)
                {   if(flag!=0)
                    printf(" %d^%d",prime[i],c);
                    else
                        printf("%d^%d",prime[i],c);
                    flag=1;


                }

            }

        }
        if(num==temp)
        {
            printf("%lld^1",num);


        }
        else if(num>1)
        {
            printf(" %lld^1",num);
        }
        pf("\n");
    }
    return 0;

}


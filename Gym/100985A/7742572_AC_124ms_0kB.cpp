#include<bits/stdc++.h>
using namespace std;
long long int GCD(long long int x,long long int y)
{
    long long int c,d,i,j,k;
    c=min(x,y);
    d=max(x,y);
    for(i=d,k=c;;)
    {
        j=i%k;

        if(j==0)
        {

            break;
        }
        i=k;
        k=j;

    }
    return k;
}

int main()
{
    long long int a,b,c,d,i;
    scanf("%lld",&d);
    while(d--)
    {
        scanf("%lld %lld",&a,&b);
        c=GCD(a,b);
        if(c!=1)printf("Sim\n");
        else printf("Nao\n");
    }
    return 0;
}


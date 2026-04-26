#include<bits/stdc++.h>
#define m 1000000007
#define siz 2000000
#define ul unsigned long long int
using namespace std;
ul ara[siz+3];

ul bigmod(ul x,ul y)
{
    ul b,store;
    if(y==0)
        return 1;
    if(y==1)
        return x%m;

    if(y%2==1)
    {
        b=bigmod(x,y-1)%m;
        return ((b*x)%m);
    }

    if(y%2==0)
    {
        store=bigmod(x,y/2)%m;

        return (store*store)%m;

    }

}

void dp()
{
    ara[0]=1;
    ara[1]=1;
    for(int i=2; i<=siz; i++)
    {
        ara[i]=(i*ara[i-1])%m;
    }
    return;
}

int main()
{
    dp();
    ul i,j,a,b,c,d,k=1;
    scanf("%llu",&a);
    while(a--)
    {
        scanf("%llu %llu",&c,&d);
        if(c==0)
            printf("Case %lld: 1\n",k++);
            else
            {
                b=ara[c+d-1];
                ul x=(ara[c]*ara[d-1])%m;

                j=bigmod((x),m-2);

                i=(b*j)%m;
                printf("Case %llu: %llu\n",k++,i);
            }


    }
    return 0;

}


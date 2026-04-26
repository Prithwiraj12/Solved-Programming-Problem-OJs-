
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x;
    scanf("%d %d",&a,&b);
    int ara[b],sum,f=0,d=0;
    for(int i=0 ; i<b ; i++)
    {
        scanf("%d",&ara[i]);
        ara[i]=ara[i]+d;
        if(ara[i]<a)x=0;
        else if(ara[i]>=a)
        {
            f=(ara[i]-a)+f;
            x=f;

        }
        d=f;

        f=0;
    }

    printf("%d\n",x);
}

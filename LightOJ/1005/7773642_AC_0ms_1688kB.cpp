#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define m 1000000000
#define li long long int
#define uli unsigned long long int
#define pi acos(-1)
using namespace std;
li ara[30];

int main()
{
    li a,b,c,d=1,i,j;
    sf("%lld",&a);
    ara[0]=1;
    for(i=1; i<=30; i++)
    {
        ara[i]=ara[i-1]*i;
    }
    while(a--)
    {
        sf("%lld %lld",&b,&c);
        li res;

        if(b<c)
        {
            res=0;

        }
        else if(c==0)
		{
			res=1;
		}
        else
        {
            res=1;
            li temp=b;
            for(i=1; i<=b-c; i++)
            {
                res*=temp;
                res/=i;
                temp--;

            }
            res=res*res*ara[c];
        }
        pf("Case %lld: %lld\n",d++,res);
    }



    return 0;
}

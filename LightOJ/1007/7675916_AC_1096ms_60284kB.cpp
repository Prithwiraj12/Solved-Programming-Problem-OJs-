#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define siz 5000007
using namespace std;
int mark[siz];

unsigned long long int phi[siz];

void sievephi()
{
    int i,j;
    for(i=1; i<=siz; i++)
    {
        phi[i]=i;
    }
    phi[1]=1;
    mark[1]=1;
    for(i=2; i<=siz; i++)
    {
        if(!mark[i])
        {
            for(j=i; j<=siz; j+=i)
            {
                mark[j]=1;
                phi[j]-=phi[j]/i;
            }
        }
    }
    phi[1]=1;
    for(i=2; i<=5000000; i++)
    {
        phi[i]=(phi[i]*phi[i])+phi[i-1];

    }
    //cout<<m[siz-1]<<endl;
    return;
}

int main()
{
    sievephi();
    int a,b,c,e,i,x=1;
    unsigned long long int d;
    sf("%d",&a);
    while(a--)
	{


        sf("%d %d",&b,&c);
        d=phi[c]-phi[b-1];


        printf("Case %d: %llu\n",x++,d);
    }
    return 0;
}



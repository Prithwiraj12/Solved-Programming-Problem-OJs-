#include<bits/stdc++.h>
using namespace std;
long long int arra[100002];

int main()
{
    long long int a,b,c,d,i,z=0;
    scanf("%lld %lld",&a,&b);
    long long int ara[a];
    for(i=0; i<a; i++)
    {
        scanf("%lld",&ara[i]);
        z=ara[i]+z;
        arra[i+1]=z;

    }

    while(b--)
    {
        long long int x;
        scanf("%lld %lld",&c,&d);
        x=arra[d]-arra[c-1];
        if(c==d&&ara[d-1]%2==1)printf("Nao\n");
        else if(x%2==0)printf("Sim\n");
        else printf("Nao\n");
    }
    return 0;
}


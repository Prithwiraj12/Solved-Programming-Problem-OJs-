#include<bits/stdc++.h>
#define siz 1000007
using namespace std;
double ara[siz];

int main()
{
    int a,b,c,j,e,i,n=1,m;
    ara[1]=0.00;
    for(i=1; i<=siz; i++)
    {
        ara[i]=log10(i*1.0)+ara[i-1];
    }

    scanf("%d",&c);
    while(c--)
    {
        scanf("%d %d",&a,&b);
        double v=ara[a]/log10(b);
        double k=floor(v)+1;
        printf("Case %d: %.0lf\n",n++,k);

    }
    return 0;


}

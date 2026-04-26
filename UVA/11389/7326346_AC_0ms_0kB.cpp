#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,s,i,f,m,j,k,x;
    long long int y;
    for(;;)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&&b==0&&c==0)break;
        int ara[a],arr[a],sum=0;;
        for( i=0 ; i<a; i++)
        {
            scanf("%d",&ara[i]);

        }
        sort(ara,ara+a);

        for( i=0 ; i<a; i++)
        {
            scanf("%d",&arr[i]);

        }
        sort(arr,arr+a);
        y=0;
       for(i=0;i<a;i++)
        {
            s=ara[i]+arr[a-i-1];

            if(s>b) y+=(s-b)*c;

        }



            printf("%lld\n",y);


}       }


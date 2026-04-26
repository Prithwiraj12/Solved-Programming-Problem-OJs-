#include<stdio.h>
int main()
{
    int a,b,c,d,z,i,y,x;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&b);
        x=((((((b*567)/9)+7492)*235)/47)-498);
        if(x<0)x=x*(-1);
        z=0;
        for(i=x;;)
        {
            z++;
            y=i%10;

            d=i/10;

            i=d;
            if(z==2)
            {
                printf("%d\n",y);
                break;
            }
        }
    }
}

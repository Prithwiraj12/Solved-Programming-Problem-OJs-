#include<stdio.h>
int main()
{
    int a,i,x,d,y=1;;

    scanf("%d",&a);

    while(a--)
    {
        scanf("%d",&d);
        int ara[d];
        x=0;
        for(i=0; i<d; i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]>0){
            x=ara[i]+x;}
        }
        printf("Case %d: %d\n",y,x);
        y++;
    }
}

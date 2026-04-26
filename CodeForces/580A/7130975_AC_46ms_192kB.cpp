#include<stdio.h>
int main()
{
    int a,i,b,c,d,x,max;
    scanf("%d",&a);
    int ara[a];
    for(i=0;i<a;i++){
        scanf("%d",&ara[i]);
    }
    x=1,max=1;
    for(i=1;i<a;i++){
        if(ara[i]>=ara[i-1])x++;
        else if(ara[i]<ara[i-1])x=1;
        if(x>max)max=x;
    }
    printf("%d\n",max);

}

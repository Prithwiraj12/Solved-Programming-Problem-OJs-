#include<stdio.h>
int main()
{
    int a,b,c,d,e=1;
    scanf("%d",&a);
    while(a--){
        scanf("%d %d %d",&b,&c,&d);
        if(b<=20&&c<=20&&d<=20)printf("Case %d: good\n",e);
        else printf("Case %d: bad\n",e);
        e++;
    }return 0;
}

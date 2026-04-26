#include<stdio.h>
int main()
{
    int a,b,c,d,e=1;
    scanf("%d",&a);
    while(a--){
        scanf("%d %d %d",&b,&c,&d);
        if(b<c&&d>c||b>c&&d<c)printf("Case %d: %d\n",e,c);
        if(b<d&&c>d||b>d&&c<d)printf("Case %d: %d\n",e,d);
        if(b>c&&b<d||b<c&&b>d)printf("Case %d: %d\n",e,b);
        e++;
    }return 0;
}

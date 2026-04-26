#include<stdio.h>
int main()
{
    int a,b,c,d,x=0;
    scanf("%d",&a);
    while(a--){
        scanf("%d %d %d",&b,&c,&d);
        if(b==1&&c==1&&d==1||b==1&&c==0&&d==1||b==1&&c==1&&d==0||b==0&&c==1&&d==1)x++;
    }
    printf("%d",x);
}

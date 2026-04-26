#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    if(a==4||a==7||a==47||a==74||a==774||a==744||a==447||a==474||a==44||a==477||a==747||a==777)printf("YES");
    else  {
        if(a%4==0||a%7==0||a%47==0||a%74==0||a%474==0||a%447==0||a%44==0||a%477==0||a%444==0)printf("YES");
        else printf("NO");
    }
}

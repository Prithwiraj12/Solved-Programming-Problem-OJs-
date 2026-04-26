#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,ln1,i,d=0,j;
    scanf("%d %d",&a,&b);
    char str[12];
    for(i=0; i<a; i++)
    {
        scanf("%s",str);
        ln1=strlen(str);
        c=0;
        for(j=0; j<ln1; j++)
        {
            if(str[j]=='4'||str[j]=='7')c++;
        }
        if(b>=c)d++;
        c=0;
    }

    printf("%d",d);

}

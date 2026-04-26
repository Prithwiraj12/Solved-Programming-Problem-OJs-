#include<stdio.h>
#include<string.h>
int main()
{
    int a,ln,i,b,c;
    char str[51];
    gets(str);
    ln=strlen(str);
    b=0,c=0;
    for(i=0;i<ln;i++){
        if(str[i]=='4')b++;
        else if(str[i]=='7')c++;
    }
    if(b>c)printf("4");
    else if(c>b)printf("7");
    else if(b!=0&&c!=0&&b==c)printf("4");
    else printf("-1");
    }




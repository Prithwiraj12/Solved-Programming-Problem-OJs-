#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,ln,i,c,x=0,d;
    char str[25];
    gets(str);
    ln=strlen(str);
    for(i=0; i<ln; i++)
    {
        if(str[i]=='!')x++;
        else if(str[i]=='1'&&str[i+1]=='0'){c=10;
        i=2;}
        else if(str[i]>='0'&&str[i]<='9')c=str[i]-'0';
    }

    a=c%x;


    if(a==0)
    {
        d=1;

        if(c==x)d=x;
        else{
        for(i=0; ; i++)
        {
            d=(c-(i*x))*d;
            if((c-(i*x)==x))break;



        }}
    }
    else if(a!=0&&a==c)
    {
        d=a;
    }
    else
    {
        d=1;
         for(i=0; ; i++)
        {
            d=(c-(i*x))*d;
            if((c-(i*x)==a))break;

        }
    }
    printf("%d\n",d);
}

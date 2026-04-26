#include<stdio.h>
#include<string.h>
int main()
{
    int a=3,ln,c,i;

    char str[101];
    while(gets(str))
    {


        ln=strlen(str);
        for(i=0; i<ln; i++)
        {
            str[i]=str[i]-7;
        }
       puts(str);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int ln,i,c=0;
    char ch[1024];
    while(gets(ch))
    {
        ln=strlen(ch);

        for(i=0; i<ln; i++)
        {
            if(ch[i]=='"')
            {
                c++;
                if(c%2!=0)
                {
                    printf("``");
                }
                else if(c%2==0)
                {

                    printf("''");
                }


            }
            else printf("%c",ch[i]);

        }printf("\n");
    }
    return 0;
}


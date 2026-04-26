#include<stdio.h>
#include<string.h>
int main()
{
    int a,ln,c,i;
    char str[101];
    scanf("%d",&a);
    getchar();
    while(a--){
        gets(str);
        ln=strlen(str);
        //printf("%s",str);
        if(ln>10){
                c=0;
        for(i=0;i<ln;i++){
            c++;
        }
        printf("%c%d%c\n",str[0],c-2,str[ln-1]);
        }
        else printf("%s\n",str);
    }

}

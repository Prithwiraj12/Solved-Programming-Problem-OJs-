#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,ln,x,y,z,q,j,k,g;
    char str[101];
    gets(str);
    ln=strlen(str);
    x=0,y=0,z=0;
    for(i=0; i<ln; i++)
    {
        if(str[i]=='1')x++;
        else if(str[i]=='2')y++;
        else if(str[i]=='3')z++;

    }
    g=0;
     if(x==1&&y==0&&z==0)printf("1\n");
     else if(x==0&&y==1&&z==0)printf("2\n");
      else if(x==0&&y==0&&z==1)printf("3\n");
      else if(x!=0&&y!=0&&z!=0||x==0&&y!=0&&z!=0||x!=0&&y==0&&z!=0){
        while(x--)printf("1+");
        while(y--)printf("2+");
        while(z--){
        printf("3");
        if(z!=0)printf("+");
      }}
      else if(x!=0&&y!=0&&z==0){
        while(x--)printf("1+");
        while(y--){
             printf("2");
        if(y!=0)printf("+");
        }
      }
      else{
        printf("%s",str);
        printf("\n");
      }




    return 0;

}



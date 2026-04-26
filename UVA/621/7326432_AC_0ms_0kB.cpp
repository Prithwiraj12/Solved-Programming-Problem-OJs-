#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,ln,x,y,z,b;
    scanf("%d",&a);
    char str[100000];
    getchar();
    while(a--)
    {

        gets(str);
        ln=strlen(str);
        x=0,y=0,z=0,b=0;
        for(;;){
        if((str[0]=='1'&&ln==1)||(str[0]=='4'&&ln==1)||(str[0]=='7'&&str[1]=='8'&&ln==2))
        {
            b++;
            break;

        }

         else if((str[ln-2]=='3')&&(str[ln-1]=='5'))
        {
            x++;
            break;
        }
        else if((str[0]=='9')&&(str[ln-1]=='4'))
        {
            y++;
            break;
        }
        else if((str[0]=='1')&&(str[1]=='9')&&(str[2]=='0'))
        {
            z++;
            break;
        }
        }
        if(x==1&&y==0&&z==0&&b==0)printf("-\n");
        else if(x==0&&y==1&&z==0&&b==0)printf("*\n");
        else if(x==0&&y==0&&z==1&&b==0)printf("?\n");
        else if(x==0&&y==0&&z==0&&b==1)printf("+\n");
        else if(z!=0&&x!=0&&y==0&&b==0) printf("-\n");
    }

    return 0;
}


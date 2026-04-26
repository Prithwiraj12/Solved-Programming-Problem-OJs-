#include<cstdio>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    int x,i,ln,y,z;

    char str[130];
    scanf("%d",&x);
    getchar();
    while(x--)
    {
        gets(str);
        ln=strlen(str);
        stack<char>abc;
        y=0,z=0;
        for(i=0; i<ln; i++)
        {
            if(str[i]=='('||str[i]=='[')
            {
                abc.push(str[i]);
                y++;

            }
            else if(str[i]==')'&&abc.empty()||str[i]==']'&&abc.empty())
            {
                y--;
                break;
            }

            else if((str[i]==')'&&abc.top()=='(')||(str[i]==']'&&abc.top()=='['))
            {
                z++;
                abc.pop();


            }
        }
         if(y==0&&z==0)printf("Yes\n");
        else if(y==z&&y!=0&&z!=0)printf("Yes\n");

        else printf("No\n");
    }
}

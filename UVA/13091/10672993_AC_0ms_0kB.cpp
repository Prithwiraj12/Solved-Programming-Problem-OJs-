#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,cas=1;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        char ch[6][6];
        int z=0,y=0;
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                cin>>ch[i][j];
            }
        }
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                if(ch[i][j]=='|')
                {
                    break;
                }
                else if(ch[i][j]=='>')
                {
                    z=1;
                }
                else if(ch[i][j]=='<')
                {
                    y=1;
                }
            }
        }
         for(int i=4; i>=0; i--)
        {
            for(int j=4; j>=0; j--)
            {
                if(ch[i][j]=='|')
                {
                    break;
                }
                else if(ch[i][j]=='>')
                {
                    y=1;
                }
                else if(ch[i][j]=='<')
                {
                    z=1;
                }
            }
        }
        if(y==1)printf("Case %d: No Ball\n",cas++);
        else printf("Case %d: Thik Ball\n",cas++);
    }


    return 0;
}

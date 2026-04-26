#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,d,e,f,x,y,i,j,mx,c;
    scanf("%d %d",&a,&b);
    getchar();
    char ara[1007][1007];
    for(i=0; i<a; i++)
    {
        scanf("%s",ara[i]);
    }
    mx=c=0;
    for(i=0; i<a; i++)
    {

        if(i%2==0)
        {
            for(j=0; j<b; j++)
            {
                if(ara[i][j]=='.')
                {
                    ++c;
                    if(c>mx)
                        mx=c;


                }

                else if(ara[i][j]=='L')
                {
                    c=0;
                }

            }

        }

        else
        {
            for(j=b-1; j>=0; j--)
            {
                if(ara[i][j]=='.')
                {
                    ++c;
                    if(c>mx)
                        mx=c;


                }

                else if(ara[i][j]=='L')
                {


                    c=0;
                }
            }

        }
    }

    cout<<mx<<endl;

    return 0;
}

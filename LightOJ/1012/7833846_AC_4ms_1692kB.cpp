#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define m 1000007
#define pi acos(-1)
using namespace std;

int visit[21][21];

int row,colm;
char str[21][21];
void dfs(int x,int y)
{
    if(visit[x][y]==1)return;
    if(str[x][y]=='#')return;
    if(x<0||y<0||x==row||y==colm)return;
    visit[x][y]=1;
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);


    return;
}

int main()
{
    int test,cas=1;;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        memset(visit,0,sizeof(visit));
        scanf("%d %d",&colm,&row);
        getchar();
        for(int i=0 ; i<row ; i++)
        {
            scanf(" %[^\n]",str[i]);
        }


        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<colm ; j++)
            {
                if(str[i][j]=='@')
                {

                    dfs(i,j);
                }
            }

        }
        int cont=0;
        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<colm ; j++)
            {
                if(visit[i][j]==0)
                {
                    cont++;
                }
            }

        }
        int total=(row*colm)-cont;
       printf("Case %d: %d\n",cas++,total);
    }

    return 0;
}

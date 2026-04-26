#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
#define     raj     117755
using namespace std;
char str[101][101];
int visit[101][101];
int row,colm;
void dfs(int x,int y)
{
    if(str[x][y]=='*')return;
    if(x<0||y<0||x==row||y==colm)return;
    if(visit[x][y]==1)return;
    visit[x][y]=1;
    dfs(x+1,y+1);
    dfs(x-1,y-1);
    dfs(x-1,y+1);
    dfs(x+1,y-1);
    dfs(x+1,y);
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x-1,y);
    return;
}

int main()
{
    for(;;)
    {
        sf("%d %d",&row,&colm);
        memset(visit,0,sizeof(visit));
        if(row==0&&colm==0)break;
        getchar();
        for(int i=0 ; i<row ; i++)
        {

            scanf("%s",&str[i]);


        }
        int cont=0;

        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<colm ; j++)
            {
                if(visit[i][j]==0&&str[i][j]=='@')
                {

                    cont++;

                    dfs(i,j);
                }
            }

        }
        cout<<cont<<endl;

    }


    return 0;
}

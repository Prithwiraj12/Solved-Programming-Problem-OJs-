#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;

int visit[510][510];
int dp[510][510];
int row,colm,cont,element;
char str[510][510];
int store[510];
void dfs(int x,int y)
{
    //if(dp[x][y]!=0)return;

    if(visit[x][y]==1)
    {
        //cont=cont;
        return;
    }

    //cont=0;
    if(x<0||y<0||x==row||y==colm)return;
    if(str[x][y]=='#')return;
    //cout<<x<<" "<<y<<endl;
    //cout<<str[x][y]<<endl;
    if(str[x][y]=='C')
    {
//		cout<<x<<" "<<y<<endl;
        cont++;
    }
    dp[x][y]=element;
    visit[x][y]=1;
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);

    return;
}

int main()
{
    int test,x,y,Q,cas=1;
    scanf("%d",&test);
    while(test--)
    {

        scanf("%d %d %d",&row,&colm,&Q);
        getchar();
        memset(visit,0,sizeof(visit));
        memset(dp,0,sizeof(dp));
        for(int i=0 ; i<row ; i++)
        {
            scanf(" %[^\n]",&str[i]);
        }

        memset(store,0,sizeof(store));
        element=1;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<colm; j++)
            {
                if(visit[i][j]==0&&str[i][j]!='#')
                {
                    cont=0;
                    dfs(i,j);
                    store[element++]=cont;

                }

            }
        }
        int v=1;

        while(Q--)
        {
            //memset(visit,0,sizeof(visit));
            scanf("%d %d",&x,&y);

            //dfs(x,y-1);
            //val[element++]=cont;
            if(v)
            {
                v=0;
                pf("Case %d:\n",cas++);
            }
            //dp[x][y]=cont;
            printf("%d\n",store[dp[x-1][y-1]]);
            //cont=0;

        }
    }




    return 0;
}

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
int ara[1001][1001],vis[1001][1001],dis[1001][1001];
int fx[]= {1,0,-1,0};
int fy[]= {0,1,0,-1};
int r,c;
void bfs(int x,int y)
{
    for(int i=0; i<1001; i++)
    {
        for(int j=0; j<1001; j++)
        {
            dis[i][j]=0;
            vis[i][j]=0;
        }
    }

    dis[x][y]=0;
    queue< pair<int,int> >q;
    q.push(make_pair(x,y));
    while(!q.empty())
    {
        int fs=q.front().first,sc=q.front().second;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int fst=fs+fx[i];
            int scd=sc+fy[i];
            if(vis[fst][scd]==0&&ara[fst][scd]==0&&fst>=0&&scd>=0&&fst<r&&scd<c)
            {
                dis[fst][scd]=dis[fs][sc]+1;
                vis[fst][scd]=1;
                q.push(make_pair(fst,scd));
            }
        }
    }
}

int main()
{
    int brnum,br,nmbom,bc;
    while(scanf("%d %d",&r,&c)&&r!=0&&c!=0)
    {
        for(int i=0; i<1001; i++)
        {
            for(int j=0; j<1001; j++)
            {
                ara[i][j]=0;
            }
        }
        scanf("%d",&brnum);
        for(int i=1; i<=brnum; i++)
        {
            scanf("%d %d",&br,&nmbom);
            for(int j=1; j<=nmbom; j++)
            {
                scanf("%d",&bc);

                ara[br][bc]=15;
            }
        }
        int sx,sy,ex,ey;
        scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
        bfs(sx,sy);
        cout<<dis[ex][ey]<<endl;
    }


    return 0;
}


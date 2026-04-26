#include<bits/stdc++.h>
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
int mx=INT_MIN,fst,scc;
char str[1005][1005];
int fx[]= {-1,0,1,0};
int fy[]= {0,-1,0,1};
int dis[1005][1005],vis[1005][1005],n,m;
void bfs(int x,int y)
{

    for(int i=0; i<1005; i++)
    {
        for(int j=0; j<1005; j++)
        {
            dis[i][j]=0;
            vis[i][j]=0;
        }
    }
    //int cnt=0;
    dis[x][y]=0;
    //cout<<8<<endl;
    queue< pair<int ,int> >q;
    q.push(make_pair(x,y));
    while(!q.empty())
    {
        int fs=q.front().first,sc=q.front().second;
        q.pop();
        vis[fs][sc]=1;
        if(mx<dis[fs][sc])
        {
            mx=dis[fs][sc];
            fst=fs,scc=sc;
        }
        for(int i=0; i<4; i++)
        {
            //cout<<8<<endl;
            int fstt=fs+fx[i];
            int scn=sc+fy[i];
            if(vis[fstt][scn]==0&&str[fstt][scn]=='.'&&fstt>=0&&scn>=0&&fstt<m&&scn<n)
            {
                dis[fstt][scn]=dis[fs][sc]+1;
                vis[fstt][scn]=1;
                q.push(make_pair(fstt,scn));
            }
        }
    }





}

int main()
{

//    freopen("txt.input","r",stdin);
//    freopen("txt.output","w",stdout);
    long long int test;
    scanf("%lld",&test);
    while(test--)
    {
        mx=INT_MIN;
        for(int i=0; i<1005; i++)
        {
            for(int j=0; j<1005; j++)
            {
                dis[i][j]=0;
                vis[i][j]=0;
            }
        }
        scanf("%d %d",&n,&m);
        for(int i=0; i<m; i++)
        {
            scanf(" %[^\n]",&str[i]);
        }

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(str[i][j]=='.'&&vis[i][j]==0)
                {
                    //cout<<str[i][j]<<endl;
                    bfs(i,j);

                }

            }
            // break;
        }
        mx=INT_MIN;
        bfs(fst,scc);
        printf("Maximum rope length is %d.\n",mx);
        //cout<<"Maximum rope length is "<<mx<<"."<<endl;
    }
    return 0;
}

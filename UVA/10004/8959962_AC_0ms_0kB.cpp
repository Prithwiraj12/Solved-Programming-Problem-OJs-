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
int vis[201],lvel[201];
int ans;
vector<int>graph[201];
void bfs(int x)
{


    lvel[x]=0;
    queue<int>q;
    q.push(x);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<graph[u].size(); i++)
        {
            int st=graph[u][i];
			vis[x]=1;
            if(vis[st]==0)
            {
                vis[st]=1;
                lvel[st]=lvel[u]+1;
                q.push(st);
            }
            else if(vis[st]==1&&lvel[u]==lvel[st])
            {
                //cout<<u<<" "<<st<<" achi"<<endl;
                ans=1;
                return;

            }

        }
    }
}
int main()
{
    int n,u,v;
    while(scanf("%d",&n)&& n)
    {
        for(int i=0; i<201; i++)
        {
            vis[i]=0;
            lvel[i]=-1;
        }
        for(int i=0;i<201;i++)
		{
			graph[i].clear();
		}
        int edge;
        ans=0;
        scanf("%d",&edge);
        for(int i=1; i<=edge; i++)
        {
            scanf("%d %d",&u,&v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        bfs(0);
        //cout<<ans<<endl;
        if(ans==1)cout<<"NOT BICOLORABLE."<<endl;
        else cout<<"BICOLORABLE."<<endl;
    }




    return 0;
}


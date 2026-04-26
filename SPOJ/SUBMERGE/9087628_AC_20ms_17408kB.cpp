#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	mj   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
#define 	anc		-10
using namespace std;

vector<int>graph[10004];
int mark[10000],dis[10004],visit[10004],low[10004];
int timer=0;

void dfs(int u,int parent)
{

    low[u]=dis[u]=timer++;
    visit[u]=1;
    int child=0,x;
    for(int i=0 ; i<graph[u].size() ; i++)
    {

        x=graph[u][i];
        if(x==parent)
            continue;
        if(visit[x]==0)
        {
            ++child;
            dfs(x,u);
            low[u]=min(low[u],low[x]);
            //cout<<6<<endl;
            if(low[x]>=dis[u] && parent!=anc)
            {

                mark[u]=1;
            }
        }
        else
        {
            low[u]=min(dis[x],low[u]);
        }

    }
    if(parent==anc && child>1)
    {
        mark[u]=1;
    }

    return;
}

int main()
{
    int n,source,v,cnt,u,m;
    while(scanf("%d%d",&n,&m) && n && m)
    {
        timer=0;
        memset(mark,0,sizeof mark);
        memset(visit,0,sizeof visit);
        memset(low,0,sizeof low);
        memset(dis,0,sizeof dis);
        for(int i=0;i<10004;i++)
        {
            graph[i].clear();
        }
        cnt=0;

        while(m--)
        {


            sf("%d%d",&u,&v);


            graph[u].push_back(v);
            graph[v].push_back(u);


        }

        dfs(1,anc);

        for(int i=0; i<=n; i++)
        {
            if(mark[i]==1)cnt++;

        }
        //cout<<cnt<<endl;

        pf("%d\n",cnt);




    }

    return 0;
}

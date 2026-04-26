#include<bits/stdc++.h>

using namespace std;

int arti(vector<int> grph[], int u, int v, int vis[])
{

    vis[u]=1;

    for(int i=0;i<grph[u].size();i++)
    {

        int nd=grph[u][i];

        if(nd==v){continue;}

        if(vis[nd]==1)
        {
            return 0;
        }
        else
        {
            if(!arti(grph,nd,u,vis)){return 0;}
        }

    }

    return 1;

}

int main()
{

int n,m;
scanf("%d %d",&n,&m);

vector<int> grph[n];

int u,v;
for(int i=0;i<m;i++)
{
    scanf("%d %d",&u,&v);
    grph[u-1].push_back(v-1);
    grph[v-1].push_back(u-1);
}

int vis[n];
int low[n];
int dis[n];

for(int i=0;i<n;i++)
{
    vis[i]=-1;
}

int r=arti(grph,0,0,vis);

if(!r){printf("NO\n");}
else
{
    for(int i=0;i<n;i++)
    {
        if(vis[i]==-1){r=0; break;}
    }

    if(r)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}


return 0;
}

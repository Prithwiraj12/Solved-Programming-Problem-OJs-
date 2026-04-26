#include<bits/stdc++.h>

using namespace std;

int cl(vector<int> grph[], int u, int v, int rb[], int vis[], int s)
{

    vis[u]=1;
    if(s==3){s=1;}
    rb[u]=s;

    for(int i=0;i<grph[u].size();i++)
    {
        int nd=grph[u][i];

        if(nd==v){continue;}

        if(vis[nd]==-1)
        {
            if(!cl(grph,nd,u,rb,vis,s+1))
            {
                return 0;
            }
        }
        else
        {
            if(rb[nd]==s)
            {
                return 0;
            }
        }

    }

    return 1;

}

int main()
{

int cs;
scanf("%d",&cs);

int n,m;
for(int i=0;i<cs;i++)
{

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
    int rb[n];
    for(int i=0;i<n;i++)
    {
        vis[i]=-1;
    }

    int r;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==-1)
        {
            r=cl(grph,i,i,rb,vis,1);
            if(r==0){break;}
        }
    }

    /*
    for(int i=0;i<n;i++)
    {
        printf("%d ",rb[i]);
    }
    printf("\n");
    */

    printf("Scenario #%d:\n",i+1);
    if(r)
    {
        printf("No suspicious bugs found!\n");
    }
    else
    {
        printf("Suspicious bugs found!\n");
    }

}

return 0;
}

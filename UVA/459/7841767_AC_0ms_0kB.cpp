#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;

int visit[50],mark[30];

vector<int>graph[30];

void dfs(int u)
{

    visit[u]=1;
    for(int i=0 ; i<graph[u].size() ; i++)
    {
        if(visit[graph[u][i]]==0)
         dfs(graph[u][i]);
    }

    return;
}

int main()
{
   // FILE *fp;
    //fp=freopen("input.txt","r",stdin);
    int test,x;
    string node;

    scanf("%d", &test);
    getchar();
    getline(cin,node);
    while(test--)
    {
        memset(visit,0,sizeof(visit));
        char ch,u,v;
        getline(cin,node);
        ch=node[0];

        x=ch-'A';

        while(getline(cin,node) && node.size())
        {
            u=node[0];
            v=node[1];


            graph[u-'A'+1].push_back(v-'A'+1);
            graph[v-'A'+1].push_back(u-'A'+1);
        }
        int cont=0;
        for(int i=1 ; i<=x+1 ; i++)
        {

                if(visit[i]==0)
                {
                    ++cont;
                    dfs(i);
                }

        }
        for(int i=1;i<=x+1;i++)
            graph[i].clear();

        cout<<cont<<'\n';
        if(test!=0)pf("\n");
    }

    return 0;
}

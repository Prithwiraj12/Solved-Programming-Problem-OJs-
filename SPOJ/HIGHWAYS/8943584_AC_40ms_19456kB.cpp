#include<bits/stdc++.h>
using namespace std;
template<class T>
struct dijekstra
{
    int n;
    vector<vector<pair<int,T> > >adj;
    vector<T>dist;
    vector<int>parent;

    dijekstra(int n): n(n),adj(n) {};
    void addEdge(int a,int b,T w)
    {
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    void findshortestpath(int src)
    {
        priority_queue<pair<T,int>, vector<pair<int,int> >,greater<pair<T,int> > > Q;
        dist=vector<T>(n,numeric_limits<T>::max());
        parent=vector<int>(n-1);
        dist[src]=0;
        Q.push({0,src});
        while(!Q.empty())
        {
            auto p=Q.top();
            Q.pop();

            int u=p.second;
            for(auto q: adj[u])
            {
                int v=q.first;
                T d=q.second;
                if(dist[v]-d >dist[u])
                {
                    dist[v]=dist[u]+d;
                    parent[v]=u;
                    Q.push({dist[v],v});
                }
            }
        }
    }

};




int main()
{


    int test,cas=1,n,m,s,t,u,v,w;
    scanf("%d",&test);
    while(test--)
    {

        scanf("%d %d %d %d",&n,&m,&s,&t);
        s--;t--;

        dijekstra<int>D(n);
        while(m--)
        {
            scanf("%d %d %d",&u,&v,&w);
            u--;
            v--;
            D.addEdge(u,v,w);


        }
        D.findshortestpath(s);
        if(D.dist[t]!=INT_MAX)printf("%d\n",D.dist[t]);
        else printf("NONE\n");
    }



}
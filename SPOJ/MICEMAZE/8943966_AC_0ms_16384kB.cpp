#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,e,t,m,u,v,cost;
    int matrix[101][101];
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            if(i==j)matrix[i][j]=0;
            else matrix[i][j]=100000000;
        }
    }
    scanf("%d %d %d %d",&n,&e,&t,&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d%d%d",&u,&v,&cost);
        matrix[u][v]=cost;
        //cout<<matrix[u][v]<<endl;
    }
  // cout<<matrix[1][2]<<endl;
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                //cout<<matrix[i][k] <<endl;
               matrix[i][j] = min(matrix[i][j] , matrix[i][k] + matrix[k][j]);

            }
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {

        if(matrix[i][e]<=t)cnt++;
    }
    cout<<cnt<<endl;

}

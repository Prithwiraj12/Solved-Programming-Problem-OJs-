#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define m 1000000000
#define li long long int
#define uli unsigned long long int
#define pi acos(-1)
using namespace std;
li n;
li dp[1000][1000],inf[1000][1000],col[1000];
li monkey(li row,li colm)
{
    li tot,tot2;
    if(colm<1||colm>col[row])return 0;
    if(row==2*n-1)return inf[row][colm];

    if(dp[row][colm]==-1)
    {
        if(row<n)
        {
            tot=inf[row][colm]+monkey(row+1,colm);
            tot2=inf[row][colm]+monkey(row+1,colm+1);
        }
        else
        {
            tot=inf[row][colm]+monkey(row+1,colm);
            tot2=inf[row][colm]+monkey(row+1,colm-1);
        }
        dp[row][colm]=max(tot,tot2);
    }
        return dp[row][colm];

}

int main()
{

    li i,j,a,c,d,store,cas=1;
    sf("%lld",&a);

    while(a--)
    {
         memset(dp,-1,sizeof dp);
        sf("%lld",&n);
        for(int row=1; row<=n; row++)
        {
            col[row]=row;
        }
        li colmpart2=n-1;
        li row=n+1;
        while(colmpart2>0)
        {
            col[row]=colmpart2;
            colmpart2--;
            row++;
        }
        for(int row=1; row<=2*n-1; row++)
        {
            for(int culm=1; culm<=col[row]; culm++)
            {
                scanf("%lld",&inf[row][culm]);
            }
        }
        store=monkey(1,1);

        pf("Case %lld: %lld\n",cas++,store);
    }
    return 0;
}

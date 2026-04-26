#include <bits/stdc++.h>
using namespace std;
int ok;
int ara[10], visit[10];
void backtrack(int pos, int fin)
{
    if(ok) return;
    if(pos==5)
    {

        if(fin==23) ok=1;
        return;
    }

    for(int i=0; i<5; i++)
    {
        if(ok) return;
        if(visit[i]==0)
        {
            visit[i]=1;
            backtrack(pos+1, fin+ara[i]);
            backtrack(pos+1, fin-ara[i]);
            backtrack(pos+1, fin*ara[i]);
            visit[i]=0;
        }
    }
}

int main()
{
    while(scanf("%d %d %d %d %d", &ara[0], &ara[1], &ara[2], &ara[3], &ara[4])==5)
    {
        int c=0;
        for(int i=0; i<5; i++)
        {
            if(ara[i]==0) c++;
        }
        if(c==5) break;

        memset(visit, 0, sizeof visit);
        ok=0;

        for(int i=0; i<5; i++)
        {
            if(ok) break;
            visit[i]=1;
            backtrack(1, ara[i]);
            visit[i]=0;
        }
        if(ok)
        {
            printf("Possible\n");

        }
        else
        {
            printf("Impossible\n");
        }
    }
    return 0;
}

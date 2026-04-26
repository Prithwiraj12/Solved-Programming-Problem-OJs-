#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	mod   	100000007
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;
int store[100][1001];
int coin[100],sum[100];
int n,k;

int match(int index,int taka)
{
    if(taka<0)
    {
        return 0;
    }
    if(index>=n)
    {
        if(taka==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(store[index][taka]==-1)
    {
        int answer=0;


        for(int i=0; i<sum[index]+1; i++)
        {
            answer=(match(index+1,taka-i*coin[index])%mod)+answer;
        }
        store[index][taka]=answer;
        //cout<<store[index][taka]<<endl;
    }
    return store[index][taka];

}

int main()
{
    int test,cas=1;
    scanf("%d",&test);
    while(test--)
    {
        memset(store,-1,sizeof store);
        scanf("%d %d",&n,&k);

        for(int i=0; i<n; i++)
        {
            scanf("%d",&coin[i]);
        }

        for(int i=0; i<n; i++)
        {
            sf("%d",&sum[i]);
        }
        int answer=match(0,k);


        answer=answer%mod;

        printf("Case %d: %d\n",cas++,answer);
    }
    return 0;

}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,x,n,k,res,cas=1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&n,&k);


        res=n-k;

        if(res<0){res*=-1;}

        res+=n;

        res*=4;

        res+=19;
        printf("Case %d: %d\n",cas++,res);
    }
}
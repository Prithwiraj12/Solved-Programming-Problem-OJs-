#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int test,n,total,sum,ans;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&n);
        total=(n*(n+1))/2,sum=0;
        for(int i=1;i<=n;i*=2)
        {
            sum=i+sum;
        }
        ans=(total-sum);
        ans=ans-sum;
        printf("%lld\n",ans);
    }
}
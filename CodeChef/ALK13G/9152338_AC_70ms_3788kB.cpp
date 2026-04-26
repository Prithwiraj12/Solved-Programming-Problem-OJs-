#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int ara[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&ara[i]);
        }
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=ara[i];
        }
        long long int x=0,y=0;
        for(int i=0;i<n;i++)
        {
          x+=ara[i];
          if(x>0)x=0;
          else if(x<y)y=x;
        }
        long long int res=sum-(2*y);
        cout<<res<<endl;


    }


    return 0;
}

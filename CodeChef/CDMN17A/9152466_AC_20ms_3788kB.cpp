#include<bits/stdc++.h>

using namespace std;


int main()
{
   long long int test,k,z;
    scanf("%lld",&test);
    while(test--)
    {
        long long int n;
        scanf("%lld %lld",&n,&k);
        long long int ara[n];
        for(int i=0;i<n;i++)scanf("%lld",&ara[i]);
        z=0;
        for(int i=0;i<n;i++)
        {
            if(ara[i]%k==0)
            {
                continue;
            }
            else if(ara[i]<k)
            {
                z=k-ara[i]+z;
            }
            else
            {
                z=min(ara[i]%k,k-ara[i]%k)+z;
               // cout<<z<<endl;

            }
        }
        cout<<z<<endl;

    }

    return 0;
}


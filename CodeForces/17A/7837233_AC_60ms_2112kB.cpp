#include<bits/stdc++.h>
#define m 10002
using namespace std;
int ara[m];
int prime[m/2+7];
int len=0;
void sieve()
{

    for(int i=3 ; i*i<=m; i+=2)
    {
        if(ara[i]==0)
        {
            for(int j=i*i; j<=m; j+=2*i)
            {
                ara[j]=1;
            }
        }
    }
    prime[++len]=2;
    for(int i=3 ; i<=m ; i+=2)
    {
        if(ara[i]==0)
        {
            prime[++len]=i;
        }
    }
}

    int main()

    {
        sieve();

        int n,k,arra[m/2+7],l=0;
        int ami=99;
        scanf("%d %d",&n,&k);
        for(int i=1 ; ; i++)
        {
            if(prime[i]<=n)
            {
                l++;
                arra[i]=prime[i];
            }
            else break;
        }

        int cont=0;
        for(int i=3 ; i<=l ; i++)
        {

            for(int j=1 ; j<i-1; j++)
            {

                if(arra[i]==(arra[j])+(arra[j+1])+1)
                {

                    cont++;

                    break;
                }
            }

        }

        if(cont>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        return 0;
    }

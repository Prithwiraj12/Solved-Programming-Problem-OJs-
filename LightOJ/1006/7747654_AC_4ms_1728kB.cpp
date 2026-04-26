#include<bits/stdc++.h>
using namespace std;
int ara[10003];


int main()
{
    int n, caseno = 0, cases,i;
    int a, b, c, d, e, f;
    scanf("%d", &cases);
    while( cases-- )
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        ara[0]=a%10000007;
        ara[1]=b%10000007;
        ara[2]=c%10000007;
        ara[3]=d%10000007;
        ara[4]=e%10000007;
        ara[5]=f%10000007;

        for(i=6; i<=n; i++)
        {
            ara[i]=(ara[i-1]+ara[i-2]+ara[i-3]+ara[i-4]+ara[i-5]+ara[i-6])%10000007;
        }
        printf("Case %d: %d\n", ++caseno, ara[n] % 10000007);

    }
        return 0;
    }


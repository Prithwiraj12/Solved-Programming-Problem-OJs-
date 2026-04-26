#include<bits/stdc++.h>
using namespace std;
long long isprime(long long a)
{
    long long b,i,x;
    if(a==1)
        return 1;
    for(i=2; i*i<=a; i++)
    {
        if(a%i==0)
            return 1;

    }
    return 0;

}

long long rajan(long long c)
{
    long long f,b;
    b=sqrt(c);
    //cout<<b<<endl;
    if(b*b!=c)return 3;
    else
    {
        f=isprime(b);
        if(f==1)return 3;
        else if(f==0) return 4;
    }
}
int main()
{
    long long x,y,z,val;
    scanf("%lld",&x);

    for(int i=0; i<x; i++)
    {
        scanf("%lld",&val);
        y=rajan(val);
        if(y==3)printf("NO\n");
        else if(y==4)printf("YES\n");
    }
    return 0;
}

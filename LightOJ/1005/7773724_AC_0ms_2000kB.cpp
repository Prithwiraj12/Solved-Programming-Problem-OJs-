#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define m 1000000000
#define li long long int
#define uli unsigned long long int
#define pi acos(-1)
using namespace std;
li ara[40][1000];
li arra[40];
li dp(li b,li d)
{
	//memset(ara,-1,sizeof ara);
    if(ara[b][d]!=-1)return ara[b][d];
    else
    {
        if(b==d||d==0)return 1;
        if(d==1)return b;
        ara[b][d]=dp(b-1,d)+dp(b-1,d-1);
        return ara[b][d];
    }
}
li fact(li a)
{
	//memset(arra,-1,sizeof arra);
	if(arra[a]!=-1)return arra[a];
	else
	{
		if(a==0)return 1;
		if(a==1)return 1;
		arra[a]=a*fact(a-1);
		return arra[a];
	}
}



int main()
{
    li a,b,c,d=1,i,j;
    sf("%lld",&a);
	memset(arra,-1,sizeof arra);
	memset(ara,-1,sizeof ara);
    while(a--)
    {
        sf("%lld %lld",&b,&c);
        li res;

        if(b<c)
        {
            res=0;

        }
        else if(c==0)
        {
            res=1;
        }
		else
		{
			res=dp(b,b-c);
		}

		res=res*res*fact(c);
        pf("Case %lld: %lld\n",d++,res);
    }





    return 0;
}

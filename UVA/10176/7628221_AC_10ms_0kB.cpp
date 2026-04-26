#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define siz 10001
#define m 131071
using namespace std;
long long int ara[siz];
long long int bigmod(int x,int y)
{
    if(y==0)
        return 1;
    if(y==1)
        return (x)%m;
    if(y%2==1)
    {
        long long int z=bigmod(x,y-1)%m;
        return (z*x)%m;
    }
    if(y%2==0)
    {
        long long int b=bigmod(x,y/2)%m;
        return (b*b)%m;
    }
}

int main()
{


    long long int a,b,c,d,i,x,j;
    string ch,null;
    for( i=0; i<=10000; i++)
    {
        ara[i]=bigmod(2,i);

    }
    while(getline(cin,ch))
    {
        null="";
        null+=ch;
        while(ch[ch.size()-1]!='#')
        {
            getline(cin,ch);
            null+=ch;
        }


        x=0;
        for(i=null.size()-2,j=0; i>=0 ; i--,j++)
        {
            x=(x+((null[i]-'0')*ara[j]))%m;



        }

        int v=x%m;
        if(v==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


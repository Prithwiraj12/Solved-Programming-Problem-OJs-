#include<bits/stdc++.h>
#define sf4(x,y,z,w)  scanf("%d %d %d %d",&x,&y,&z,&w)
#define pf1(x)      printf("%d\n",x)
#define pf2(x,y)    printf("%d %d\n",x,y);
using namespace std;
int main()
{
    int  a,b,c,d,ans=INT_MAX;
    sf4(a,b,c,d);
    int offer=a,demand=c;
    while(offer<demand)
    {
        offer+=b;
        if(offer>=demand)
        {
            ans=demand;
            break;
        }
        demand-=d;
        //  pf2(offer,demand);
    }
    //if(b==c)pf1(c);
    pf1(min(ans,offer));
    return 0;
}

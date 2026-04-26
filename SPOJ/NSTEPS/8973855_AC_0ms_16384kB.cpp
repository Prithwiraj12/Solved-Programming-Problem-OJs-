#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;


int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int x,y;
        //int z=x-2,y=x;
        sf("%d %d",&x,&y);

        if((x==y&&x%2==0&&y%2==0)||(x!=y&&x%2==0&&y%2==0&&y==x-2))
        {
            pf("%d\n",x+y);
        }
        else if((x==y&&x%2==1&&y%2==1)||(x!=y&&x%2==1&&y%2==1&&y==x-2))
        {
            int ans=(x+y)-1;
            pf("%d\n",ans);
        }
        else
        {
            pf("No Number\n");
        }
//		else if(x!=y&&x%2==0&&y%2==0&&y==x-2)
//		{
//			pf("%d\n",x+y);
//		}
    }




    return 0;
}

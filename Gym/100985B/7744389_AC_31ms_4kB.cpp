#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,i,x;
    scanf("%d",&a);
    int ara[a];
    for(i=0; i<a; i++)
    {
        scanf("%d",&ara[i]);
    }
    b=1,x=0;
    for(i=2;; )
    {
    	x++;
        b=i*b;
        if(b>a)
        {
            cout<<x<<endl;
            break;

        }
        if(b==a)
		{
			cout<<x+1<<endl;
			break;
		}
    }
    return 0;
}


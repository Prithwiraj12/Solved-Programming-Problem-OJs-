#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,sum=0;
    scanf("%d",&a);
    if(a>0)
    {
        for(int i=1; i<=a; i++)
        {
            sum=i+sum;
        }
        printf("%d\n",sum);
    }
    else if(a<=0)
    {
        for(int i=1; i>=a; i--)
        {
            sum=i+sum;
        }
        printf("%d\n",sum);
    }

}


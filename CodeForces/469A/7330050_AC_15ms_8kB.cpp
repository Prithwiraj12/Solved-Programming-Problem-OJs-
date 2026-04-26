#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,x;
    scanf("%d",&a);
    scanf("%d",&b);
    int ara[200];

    for(i=0; i<b; i++)
    {
        scanf("%d",&ara[i]);

    }
    scanf("%d",&c);
    int arr[100];
    for(i=0; i<c; i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=0;
    for(i=b; i<b+c; i++)
    {
        ara[i]=arr[k];
        k++;
    }


    sort(ara,ara+((b+c)));

    x=0,k=1;
    for(i=0; i<b+c; i++)
    {
        if(ara[i]==k)
        {
            k++;
            x++;
        }
    }





    if(x==a)printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");
}


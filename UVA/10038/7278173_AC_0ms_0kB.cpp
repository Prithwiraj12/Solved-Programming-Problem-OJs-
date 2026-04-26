#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,x,arr[3000];
    while(scanf("%d",&a)!=EOF)
    {
        int ara[a];

        for(i=0; i<a; i++)
        {
            scanf("%d",&ara[i]);
        }
        c=0,x=0;
        for(i=0; i<a-1; i++)
        {
            b=fabs(ara[i]-ara[i+1]);
           arr[c]=b;
            c++;


        }
        sort(arr,arr+(a-1));
        x=0;
        for(i=0;i<a-1;i++){
                if(arr[i]==i+1)x++;
        }

        if(x==a-1)printf("Jolly\n");
        else printf("Not jolly\n");
    }
}

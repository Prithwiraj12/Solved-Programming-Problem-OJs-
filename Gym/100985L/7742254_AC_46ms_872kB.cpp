#include<bits/stdc++.h>
using namespace std;
int arra[100000];

int main()
{
    int a,b,c,d,i;
    scanf("%d",&a);
    int ara[a];
    for(i=0; i<a; i++)
    {
        scanf("%d",&ara[i]);
        arra[i]=ara[i];
    }
    sort(ara,ara+a);
    c=0;
    for(i=0; i<a; i++)
    {
        if(ara[a-1]==arra[i])
        {
            c++;
            d=i+1;
        }
    }
    if(c>1)cout<<-1<<endl;
    else cout<<d<<endl;
    return 0;
}


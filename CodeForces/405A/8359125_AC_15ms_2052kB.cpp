#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    sort(ara,ara+n);
    for(int i=0;i<n;i++)
    {
        //if(i!=n-1)printf(" ");
        printf("%d",ara[i]);
         if(i!=n-1)printf(" ");
    }
    cout<<endl;
}

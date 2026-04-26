#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,temp,j,mini;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        mini=i;
        j=i-1;
       for(int j=i+1;j<n;j++)
       {
           if(ara[j]<ara[mini])
           {
               mini=j;
           }
       }
       if(i!=mini)
       {
           swap(ara[i],ara[mini]);
           cnt++;
       }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",ara[i]);
        if(i!=n-1)printf(" ");
    }
    cout<<endl<<cnt<<endl;



}


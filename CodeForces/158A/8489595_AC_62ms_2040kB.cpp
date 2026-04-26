#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,y,sum=0;
    scanf("%d %d",&n,&k);
    y=k;
    int ara[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
        //sum+=ara[i];
    }
    int z=0;
   for(int i=1;i<=n;i++)
   {
       if(ara[i]>=ara[k]&&ara[i]>0)z++;
   }
   //if(sum==0)z=0;
    cout<<z<<endl;
}


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
    int temp=ara[0],cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i+1;j--)
        {
            if(ara[j]<ara[j-1])
            {
                swap(ara[j],ara[j-1]);
                cnt++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",ara[i]);
        if(i!=n-1)printf(" ");
    }
cout<<endl<<cnt<<endl;
}

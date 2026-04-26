#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,temp,j,mini;
    scanf("%d",&n);
    int ara[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",ara[i]);
        if(i!=n-1)printf(" ");
    }
    cout<<endl;
    int cnt=0;
    for(int i=1; i<n; i++)
    {
        temp=ara[i];
        j=i-1;
        while(j>=0&&ara[j]>temp)
        {
            ara[j+1]=ara[j];
            j--;

        }
        ara[j+1]=temp;
        for(int i=0; i<n; i++)
        {
            printf("%d",ara[i]);
            if(i!=n-1)printf(" ");
        }
        cout<<endl;

    }
}



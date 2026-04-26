#include<bits/stdc++.h>

using namespace std;

int main()
{

int n;
scanf("%d",&n);

int ns[n];

for(int i=0;i<n;i++)
{
    scanf("%d",&ns[i]);
}

for(int i=1;i<n;i++)
{

    printf("%d",ns[0]);
    for(int i=1;i<n;i++)
    {
        printf(" %d",ns[i]);
    }
    printf("\n");

    int key=ns[i];
    for(int j=i-1;j>=0;j--)
    {
        if(ns[j]<key)
        {
            ns[j+1]=key;
            break;
        }
        else if(j==0)
        {
            ns[1]=ns[0];
            ns[0]=key;
        }
        else
        {
            ns[j+1]=ns[j];
        }
    }

}

    printf("%d",ns[0]);
    for(int i=1;i<n;i++)
    {
        printf(" %d",ns[i]);
    }
    printf("\n");

return 0;
}
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

int cnt=0;

for(int i=0;i<n;i++)
{

    int mn=i;

    for(int j=i+1;j<n;j++)
    {
        if(ns[j]<ns[mn])
        {
            mn=j;
        }
    }

    if(i!=mn)
    {
        swap(ns[i],ns[mn]);
        cnt++;
    }

}

printf("%d",ns[0]);
for(int i=1;i<n;i++)
{
    printf(" %d",ns[i]);
}
printf("\n%d\n",cnt);

return 0;
}
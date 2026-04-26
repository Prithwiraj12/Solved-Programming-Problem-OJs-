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

    for(int j=n-1;j>i;j--)
    {

        if(ns[j]<ns[j-1])
        {
            swap(ns[j],ns[j-1]);
            cnt++;
        }

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
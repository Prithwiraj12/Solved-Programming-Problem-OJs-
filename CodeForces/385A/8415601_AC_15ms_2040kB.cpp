#include<bits/stdc++.h>

using namespace std;

int main()
{

int n,c;
scanf("%d %d",&n,&c);

int ns[n];

for(int i=0;i<n;i++)
{
    scanf("%d",&ns[i]);
}

int mx=0;

for(int i=0;i<n-1;i++)
{
    int t=ns[i]-(ns[i+1]+c);
    if(t>mx){mx=t;}
}

printf("%d\n",mx);

return 0;
}
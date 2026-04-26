#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k;

    scanf("%d",&b);
    int ara[b];

    for(i=0; i<b; i++)
    {
        scanf("%d",&ara[i]);

    }
  sort(ara,ara+b);
  for(i=0; i<b; i++)
    {
        printf("%d ",ara[i]);

    }
    printf("\n");}



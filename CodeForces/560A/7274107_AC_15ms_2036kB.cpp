#include<bits/stdc++.h>
using namespace std;

int main()
{

   int a,b,c,i;
   scanf("%d",&a);
   int ara[a];
   for(i=0;i<a;i++){
    scanf("%d",&ara[i]);
   }
   sort(ara,ara+a);
   if(ara[0]==1)printf("-1\n");
   else printf("1\n");
    return 0;

}



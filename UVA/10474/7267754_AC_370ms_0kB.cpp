#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,u,i,y=1;
    for(;;){
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)break;
        int ara[a];
        for(i=0;i<a;i++){
        scanf("%d",&ara[i]);}
        sort(ara,ara+a);
        int x=1;
        while(b--){
            scanf("%d",&c);
            u=0;
            for(i=0;i<a;i++){
                if(ara[i]==c){u++;
                        if(x==1){x++;
                        printf("CASE# %d:\n",y++);}

                printf("%d found at %d\n",c,i+1);
                break;}


                }
                if(u==0){
                    if(x==1){x++;
                    printf("CASE# %d:\n",y++);}
                     printf("%d not found\n",c);}


                }

            }
        }



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,i,j,x;
    scanf("%d",&a);
    while(a--){
        scanf("%d",&b);
        int ara[b];
        for(i=0;i<b;i++){
            scanf("%d",&ara[i]);
        }
        int temp,x=0;
        for(i=0;i<b;i++){
            for(j=i+1;j<b;j++){

                if(ara[i]>ara[j]){
                        x++;
                temp=ara[j];
                ara[j]=ara[i];
                ara[i]=temp;}

            }
        }

            printf("Optimal train swapping takes %d swaps.\n",x);

    }
    return 0;

}



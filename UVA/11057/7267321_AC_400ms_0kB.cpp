#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main()
{
    int a,b,c,d,f,i,j,sum,x,y,m,n,q,r;

    while(scanf("%d",&a)!=EOF){
        int ara[a];
        for(i=0;i<a;i++){
        scanf("%d",&ara[i]);}
        scanf("%d",&d);
        f=INT_MAX;
        for(i=0;i<a;i++){
            for(j=1;j<a;j++){
                sum=ara[i]+ara[j];
                if(sum==d){
                    x=fabs(ara[i]-ara[j]);
                    if(x<f){
                        f=x;
                        n=ara[i];
                        m=ara[j];
                        if(n>m){q=m;
                        r=n;}
                        else if(n<m){q=n;
                        r=m;}
                        else {q=n;
                        r=m;}
                    }
                    }

                }
            }printf("Peter should buy books whose prices are %d and %d.\n",q,r);
            printf("\n");


        }
    return 0;
}

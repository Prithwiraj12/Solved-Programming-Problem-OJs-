#include<stdio.h>
int main()
{

    int a,b,c,d,i,f,g,h,e;
    scanf("%d",&a);
    while(a--){
            scanf("%d %d %d",&b,&c,&d);
            e=b+c,h=0;
            for(i=e;;){
                f=i/d;
                g=i%d;
                h=f+h;
                i=f+g;
                if(i<d){printf("%d\n",h);
                        break;
            }

    }
}return 0;}

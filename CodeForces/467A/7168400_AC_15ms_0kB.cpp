#include<stdio.h>
int main()
{
    int a,b,c,d,z=0,x;
    scanf("%d",&a);
    while(a--){
        scanf("%d %d",&b,&c);
        if(b==c||c-b<2)x=0;
        else{
            z++;

        }
    }printf("%d\n",z+x);
}

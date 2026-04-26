#include<stdio.h>
int main()
{
    long long int a,c,i;
    for(;;)
    {
        scanf("%lld",&a);
        if(a<0)break;

        else{
			c=((a*(a+1))/2)+1;
			printf("%lld\n",c);
        }
    }
    return 0;
}

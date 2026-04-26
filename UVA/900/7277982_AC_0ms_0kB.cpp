#include<stdio.h>
int main()
{
	int a,i,d;
	for(;;){
		scanf("%d",&a);
		if(a==0)break;
		int b=0,c=1;
		for(i=0;i<=a;i++){
			d=c+b;
			b=c;
			c=d;
		}printf("%d\n",b);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,c,i,x=1;
	for(;;){
		scanf("%d",&a);
		if(a<0)break;
		int c=0,d=0;
		if(a==2)d=1;
		for(i=2;i<a;){
			c=i+c;
			d++;
			i=c;
			if(c>a)break;
		}printf("Case %d: %d\n",x,d);
		x++;
	}return 0;
}

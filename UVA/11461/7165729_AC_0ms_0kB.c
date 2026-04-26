#include<stdio.h>
#include<math.h>;
int main()
{
	int a,b,c,d,e;
	for(;;){
		scanf("%d %d",&a,&b);
		if(a==0&&b==0)break;
		else{
			c=sqrt(a);
			d=sqrt(b);
			e=d-c;
			if(c*c==a)e=e+1;
			printf("%d\n",e);
		}
	}
}

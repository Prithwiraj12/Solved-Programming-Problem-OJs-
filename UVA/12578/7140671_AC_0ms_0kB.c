#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	double b,c,d,e,f;
	scanf("%d",&a);
	while(a--){
		scanf("%lf",&b);
		c=(6*b)/10;
		d=c*b;
		e=b/5;
		e=acos(-1)*e*e;
		f=d-e;
		printf("%.2lf %.2lf\n",e,f);
	}
}

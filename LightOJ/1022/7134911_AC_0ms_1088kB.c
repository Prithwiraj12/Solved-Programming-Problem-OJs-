#include<stdio.h>
#include<math.h>
int main()
{
	int a,x=1;
	double b,c,d,e;
	scanf("%d",&a);
	while(a--){
		scanf("%lf",&b);
		e=(b*2);
		e=e*e;

		c=2*acos(0.0)*(b*b);

		d=e-c;
		printf("Case %d: %.2lf\n",x,d);
		x++;
	}
}

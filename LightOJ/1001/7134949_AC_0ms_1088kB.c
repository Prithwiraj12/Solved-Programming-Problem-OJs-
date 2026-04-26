#include<stdio.h>
#include<math.h>
int main()
{
	int a,x=1,b,c,e,d;

	scanf("%d",&a);
	while(a--){
		scanf("%d",&d);
		if(d%2==0){e=d/2;
		c=d/2;}
		else if(d<=10) {
			e=d-1;
			c=d-e;
		}
		else {
			e=d/2;
			c=d-e;
		}
		printf("%d %d\n",e,c);

	}
}

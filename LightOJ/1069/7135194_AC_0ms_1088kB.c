#include<stdio.h>
int main()
{
	int a,b,c,d=1,i,x,y,z;
	scanf("%d",&a);
	while(a--){
		scanf("%d %d",&b,&c);
		x=0;
		if(c>b){for(i=c-1;i>=0;i--){
			x=4+x;
		}
		y=x+19;
		printf("Case %d: %d\n",d,y);}
		else{
				z=0;
			for(i=c+1;i<=b;i++){
				z=4+z;
			}
			for(i=b-1;i>=0;i--){
				x=x+4;
			}
			y=z+x+19;
			printf("Case %d: %d\n",d,y);
		}
		d++;
	}
}

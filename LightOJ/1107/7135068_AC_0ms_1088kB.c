#include<stdio.h>
int main()
{
	int a,b,d,e,f,g,x,y,z=1,i;

	scanf("%d",&a);
	while(a--){
		scanf("%d %d %d %d",&d,&e,&f,&g);
		scanf("%d",&b);
		printf("Case %d:\n",z);
		for(i=1;i<=b;i++){
		scanf("%d %d",&x,&y);
		if(x>d&&x<f&&y>e&&y<g)printf("Yes\n");
		else printf("No\n");

		}z++;

	}
}


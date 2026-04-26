#include<stdio.h>
int main()
{
	int a,b,c,d,x=1;
	scanf("%d",&a);
	while(a--){
		scanf("%d %d %d",&b,&c,&d);
		if((b*b+c*c==d*d)||(c*c+d*d==b*b)||(b*b+d*d==c*c))printf("Case %d: yes\n",x);
		else printf("Case %d: no\n",x);
		x++;
	}
}

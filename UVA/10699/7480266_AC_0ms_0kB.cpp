#include<bits/stdc++.h>
using namespace std;
int pf(int x)
{
	int i,d=0,c;
	for(i=2;i*i<=x;i++)
	{

		c=0;
		while(x%i==0){
			c++;
			x=x/i;
			//printf("%d %d\n",x,c);

		}if(c!=0)d++;
		//printf("%d\n",d);

	}
	if(x!=1)d++;
	//printf("%d\n",d);
	return d;
}
int main()
{
	int a,b;
	for(;;){
		scanf("%d",&a);
		if(a==0)break;
		b=pf(a);
		printf("%d : %d\n",a,b);
	}
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d,x=1,e;
	scanf("%d",&a);
	while(a--){
		scanf("%d %d %d",&b,&c,&d);
		e=b+d+c;
		printf("Case %d: Sum of %d, %d and %d is %d\n",x++,b,c,d,e);
	}
}

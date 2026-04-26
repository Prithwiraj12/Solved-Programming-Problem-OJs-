#include<bits/stdc++.h>

using namespace std;

int main()
{

	int a,b;
	scanf("%d %d",&a,&b);
	int c=(a*a)+(b*b);
	int d=fabs((a*a)-(b*b));
	int ans=sqrt(c);
	int res=sqrt(d);
	if(ans*ans==c)
	{
		printf("YES\n");
	}
	else if(res*res==d)
	{
		printf("YES\n");
	}
	else printf("NO\n");
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,f;
	scanf("%d",&a);
	while(a--){
		scanf("%d",&b);
		int ara[b];
		for(int i=0;i<b;i++){
			scanf("%d",&ara[i]);
		}
		sort(ara,ara+b);
		d=b/2,f=0;
		for(int i=0;i<b;i++){
			c=fabs(ara[i]-ara[d]);
			f=c+f;
		}
		printf("%d\n",f);
	}
}

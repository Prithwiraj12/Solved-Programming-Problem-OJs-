#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d,x=1,e;
	scanf("%d",&a);
	while(a--){
		scanf("%d",&b);
		printf("Case %d: ",x++);
		if(b>=80)printf("A+\n");
		else if(b>=75&&b<80)printf("A\n");
		else if(b>=70&&b<75)printf("A-\n");

		else if(b>=65&&b<70)printf("B+\n");
		else if(b>=60&&b<65)printf("B\n");
		else if(b>=55&&b<60)printf("B-\n");

		else if(b>=50&&b<55)printf("C\n");
		else if(b>=45&&b<50)printf("D\n");
		else printf("F\n");


	}
}


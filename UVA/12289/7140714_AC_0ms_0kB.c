#include<stdio.h>
#include<string.h>
int main()
{
	int a,ln,i;
	scanf("%d",&a);
	char str[6];
	getchar();
	while(a--){
		gets(str);
		ln = strlen(str);
		if(ln==5)printf("3\n");
		else if(ln==3) {
				if(str[0]=='o'&&str[1]=='n'||str[0]=='o'&&str[2]=='e'||str[1]=='n'&&str[2]=='e')printf("1\n");
		else printf("2\n");

	}
}}

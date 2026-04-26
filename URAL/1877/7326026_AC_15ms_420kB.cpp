#include<bits/stdc++.h>
using namespace std;
int main()
{

	int a,b,c,ln,i,j,ln1,x=0,y=0;
	char str[5],str1[5];
	gets(str);
	gets(str1);
	ln=strlen(str);
	ln1=strlen(str1);
	for(i=0;i<=9;i++){
		if(i%2==0){
			if(str[3]-'0'==i)x++;

		}
		if(i%2!=0){
			if(str1[3]-'0'==i)y++;

		}





	}
	if(x!=0||y!=0)printf("yes\n");
	else printf("no\n");
}

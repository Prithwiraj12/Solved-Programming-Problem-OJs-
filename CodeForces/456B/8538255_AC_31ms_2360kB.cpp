#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;


int main()
{
	string str;
	getline(cin,str);
	int x,y;
	int a=str.size();
	if(a>=2)x=(str[a-1]-'0')+(10*(str[a-2]-'0'));
	else x=str[a-1]-'0';
	//cout<<x<<endl;
	if(x%4==0)pf("4\n");
	else pf("0\n");




return 0;
}

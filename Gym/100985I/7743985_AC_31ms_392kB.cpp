#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,e,f,i;
	scanf("%d %d",&a,&b);
	int ara[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&ara[i]);

	}
	int x=0,d=0;
	for(i=0;i<a;i++)
	{
		x=ara[i]+x;
		d++;
		if(x>=b)break;
	}
	e=0,f=0;
	for(i=a-1;i>=0;i--)
	{
		e=ara[i]+e;
		f++;
		if(e>=b)break;
	}
	if(d>f)cout<<"Yan"<<endl;
	else if(f>d)cout<<"Nathan"<<endl;
	else cout<<"Empate"<<endl;

	return 0;
}


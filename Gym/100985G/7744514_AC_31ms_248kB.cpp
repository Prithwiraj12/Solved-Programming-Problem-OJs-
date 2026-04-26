#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b=1,c=0,d=0,i;
	string s;
	getline(cin,s);
	for(i=0;i<s.size();i++)
	{
		if(s[i]=='A')c++;
		if(s[i]=='B')d++;
		if(d>c)
		{
			b=0;
			cout<<"Nao"<<endl;
			break;
		}

	}
	if(c==d)cout<<"Sim"<<endl;
	else if(b!=0&&c>d)cout<<"Nao"<<endl;
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,a,b,c=1;;
	string s;
	getline(cin,s);
	for(i=0;i<s.size();i++)
	{
		if(s[i]==s[i+1])
		{
			c++;
		}
		else
		{
			cout<<s[i]<<c;
			c=1;
		}

	}
	cout<<endl;
	return 0;
}


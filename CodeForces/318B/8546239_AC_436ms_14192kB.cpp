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
    //	string s="RaJAn";
    //	string x=s.substr(2,3);
    string str,x,y;
    getline(cin,str);
    vector<string>v;
   li cnt=0;
    for(int i=0; i<str.size(); i++)
    {
        x=str.substr(i,5);
        //cout<<x<<endl;
        if(x=="heavy"||x=="metal")
        {
			v.push_back(x);

        }
    }
    li cont=0,z;
    for(int i=v.size()-1;i>=0;i--)
	{
		//cout<<v[i]<<endl;
		if(v[i]=="metal")
		{
			//if(z==0)cnt=0;
			cnt++;
			z=1;
		}
		if(v[i]=="heavy")
		{
			if(cnt>0)
			{
				cont=cont+cnt;
			}
			z=0;
		}

	}
	cout<<cont<<endl;


    return 0;
}

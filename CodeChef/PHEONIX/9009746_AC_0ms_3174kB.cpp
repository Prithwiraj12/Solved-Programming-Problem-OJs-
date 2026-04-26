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

    int test,n,z;
    sf("%d",&test);
    while(test--)
    {
        int n;
        sf("%d",&n);
        z=0;
          int ara[n],arra[n];
        for(int i=0; i<n; i++)sf("%d",&ara[i]);
        for(int i=0; i<n; i++)sf("%d",&arra[i]);
        for(int i=0; i<n-1; i++)if(ara[i]!=ara[i+1])z=1;
        for(int i=0; i<n-1; i++)if(arra[i]<15)z=1;
        if(z==1)cout<<"No Party"<<endl;
        else cout<<"Party"<<endl;
    }
    return 0;
}

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
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    double n,k,j;
    scanf("%lf %lf",&n,&k);
    if(k>=n)j=2;
    else
    {
        j=ceil((2*n)/k);
        //cout<<j<<endl;
    }
    pf("%.0lf\n",j);


    return 0;
}

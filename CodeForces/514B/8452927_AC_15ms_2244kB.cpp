#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;
int ara[50000];

int main()
{
    vector<double>v;
    double n,xi,yi,x,y;
    int cnt,ans=0,res=0;
    sf("%lf%lf%lf",&n,&xi,&yi);
    int zi=xi-yi;
    while(n--)
    {
        sf("%lf %lf",&x,&y);
        if(x==xi)res=1;
        else if(y==yi)ans=1;
        else
        {
            double slope=((y-yi)/(x-xi));
            //cout<<slope<<endl;
            v.push_back(slope);
        }
    }
    sort(v.begin(),v.end());
    cnt=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==v[i+1])cnt++;
    }
    cnt=v.size()-cnt;
    printf("%d\n",cnt+ans+res);




    return 0;
}

#include<bits/stdc++.h>
using namespace std;
double x[1002],y[1002],r[1002];
int euler(int a,int b)
{
	int m=fabs((x[a]-x[b])*(x[a]-x[b]))+fabs((y[a]-y[b])*(y[a]-y[b]));
	int n=((r[a]+r[b]))*((r[a])+r[b]);
	if(m-n==0.0)return 1;
	else return 0;

}

int main()
{
    int a,b,c,d,i,j;
    scanf("%d",&a);

    for(i=0; i<a; i++)
    {
        scanf("%lf %lf %lf",&x[i],&y[i],&r[i]);
    }
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(euler(i,j))
			{
				cout<<i+1<<" "<<j+1<<endl;
			}
		}
	}



    return 0;
}

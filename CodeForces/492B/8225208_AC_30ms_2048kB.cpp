#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

int n,l;
scanf("%d %d",&n,&l);

vector<int> ns;

int t;
for(int i=0;i<n;i++)
{
    scanf("%d",&t);
    ns.push_back(t);
}

sort(ns.begin(),ns.end());

/*
for(int i=0;i<n;i++)
{
    printf("%d ",ns[i]);
}
printf("\n");
*/

double mx=0;
double tm;

for(int i=0;i<n-1;i++)
{
    tm=ns[i+1]-ns[i];
    tm/=2;
    if(tm>mx){mx=tm;}
}

if(ns[0]!=0)
{
    if(ns[0]>mx){mx=ns[0];}
}

if(ns[n-1]!=l)
{
    if(l-ns[n-1]>mx){mx=l-ns[n-1];}
}

printf("%.10f\n",mx);

return 0;
}
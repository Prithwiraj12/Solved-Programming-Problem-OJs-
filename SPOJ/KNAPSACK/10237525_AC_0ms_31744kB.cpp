#include <bits/stdc++.h>
using namespace std;
int item[2005];
int value[2005];
int store[2005][2005];
int main()
{
	int s,n;
	scanf("%d %d",&s,&n);
	for(int i=1;i<n+1;i++)
	{
		scanf("%d %d",&item[i],&value[i]);
	}
	for(int i=0;i<n+1;i++)
	{
		store[0][i] = 0;
	}
	for(int i=0;i<s+1;i++)
	{
		store[i][0]=0;
	}
    for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<s+1;j++)
		{
			if(item[i]>j)
			{
				store[j][i] = store[j][i-1];
			}
			else
			{
				store[j][i] = max(store[j-item[i]][i-1]+value[i] , store[j][i-1]);
			}
		}
	}
	printf("%d\n",store[s][n]);


}

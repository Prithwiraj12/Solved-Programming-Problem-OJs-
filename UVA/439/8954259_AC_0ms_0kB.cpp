#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

int vis[9][9],dis[9][9];
int fx[]={-2,-2,2,2,-1,1,-1,1};
int fy[]={-1,1,-1,1,2,2,-2,-2};


void bfs(int x,int y)
{
	for(int i=1;i<9;i++)
	{
		for(int j=1;j<9;j++)
		{
			dis[i][j]=0;
			vis[i][j]=0;
		}
	}
	dis[x][y]=0;
	queue< pair<int,int> >q;
	q.push(make_pair(x,y));
	while(!q.empty())
	{
		int fs=q.front().first,sc=q.front().second;
		q.pop();
		vis[fs][sc]=1;

		for(int i=0;i<8;i++)
		{
			int fst=fs+fx[i];
			int scd=sc+fy[i];
			if(vis[fst][scd]==0&&fst>=1&&scd>=1&&fst<9&&scd<9)
			{
				dis[fst][scd]=dis[fs][sc]+1;
				vis[fst][scd]=1;
				q.push(make_pair(fst,scd));
			}
		}
	}
}

int main()
{
    string str;
    int sx,sy,ex,ey;
    while(getline(cin,str))
	{
		sx=str[1]-'0',sy=str[0]-'a'+1;
		ex=str[4]-'0',ey=str[3]-'a'+1;

		bfs(sx,sy);
		cout<<"To get from "<< str[0]<<str[1] <<" to "<< str[3]<<str[4] <<" takes "<< dis[ex][ey] <<" knight moves."<<endl;
	}

return 0;
}


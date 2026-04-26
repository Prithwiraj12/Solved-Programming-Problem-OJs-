#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;

#define 	pii pair<int,int>

vector<pii>v,v1;

int inrow,incolm,lineCounter=0;
int place(pii pos)
{
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].first==pos.first)return 1;
        if(v[i].second==pos.second)return 1;
        int diffrow= abs(pos.first-v[i].first);
        int diffcol= abs(pos.second-v[i].second);

        if(diffrow==diffcol) return 1;
    }
    return 0;
}

void rec(int colm)
{
    if(colm==incolm)
    {
        rec(colm+1);
        return;
    }
    if(colm>8)
    {
        printf("%2d     ", ++lineCounter);
        v1=v;
        //
        for (int j = 0; j < 8; j++)
        {
            sort(v1.begin(),v1.end());
            printf(" %d",v1[j].second );
            v1.clear();
        }
        printf("\n");
        return;
    }
    for(int row=1; row<=8; row++)
    {
        pii pos=(make_pair(colm,row));

        if(!place(pos))
        {
            v.push_back(pos);
            rec(colm+1);
            v.pop_back();
        }
    }
}

int main()
{
    int test;
    sf("%d",&test);
    while(test--)
    {
        lineCounter=0;
        v.clear();
        sf("%d %d",&inrow,&incolm);
        v.push_back(make_pair(incolm,inrow));
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        rec(1);
        if(test)pf("\n");

    }




    return 0;
}

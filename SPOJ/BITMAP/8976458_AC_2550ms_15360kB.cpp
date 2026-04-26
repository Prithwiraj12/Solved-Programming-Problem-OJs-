#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	mp  	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;


int main()
{
    int test;
    vector< pair<int, int> >v;
    sf("%d",&test);
    // getchar();
    while(test--)
    {
    	v.clear();
        int n,m;
        sf("%d %d",&n,&m);
        getchar();
        //getchar();
        char ara[n+1][m+1];
        int arra[n+1][m+1];
        for(int i=1; i<=n; i++)
        {
            scanf(" %[^\n]",&ara[i]);
            // getchar();
        }
        //cout<<ara[0][m]<<endl;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                arra[i][j]=1000000000;
            }
        }

        for(int i=1; i<=n; i++)
        {

            for(int j=1; j<=m; j++)
            {
                if(ara[i][j-1]=='1')
                {
                    //cout<<j<<endl;
                    v.push_back(make_pair(i,j));
                }

            }
        }
        for(int k=0; k<v.size(); k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=m; j++)
                {
                    arra[i][j]=min(abs(i-v[k].first)+abs(j-v[k].second),arra[i][j]);
                }
            }
        }


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            pf("%d",arra[i][j]);
            if(j!=m)pf(" ");
        }
        pf("\n");
    }

}

return 0;
}

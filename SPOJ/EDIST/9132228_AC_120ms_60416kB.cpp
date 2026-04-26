#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int m[3000][3000];
char str[3000],str1[3000],d[3000][3000];
int main()

{
    int test;
    scanf("%d",&test);
    //getchar();
    while(test--)
    {
        for(int i=0; i<3000; i++)
        {
            for(int j=0; j<3000; j++)
            {
                m[i][j]=0;
            }
        }
        scanf("%s",str);
        scanf("%s",str1);
        int n=strlen(str);
        int mb=strlen(str1);
        for(int i=0; i<=n; i++)
        {
            m[i][0]=i;
        }
        for(int i=0; i<=mb; i++)
        {
            m[0][i]=i;
        }


        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=mb; j++)
            {
                if(str[i-1]==str1[j-1])
                {
                    m[i][j]=m[i-1][j-1];
                    //d[i][j]='d';
                }
                else
                {
                    int x=min(m[i][j-1],m[i-1][j]);
                    m[i][j]=1+min(x,m[i-1][j-1]);
                }
            }
//            for(int i=0;i<n;i++)
//			{
//				for(int j=0;j<mb;j++)
//				{
//					cout<<m[i][j]<<" ";
//				}
//				cout<<endl;
//			}
        }

        cout<<m[n][mb]<<endl;
    }
}


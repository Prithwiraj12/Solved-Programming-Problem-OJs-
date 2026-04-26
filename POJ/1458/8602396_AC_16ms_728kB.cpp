#include<cstdio>
#include<string>

using namespace std;

int lcs(string x, string y, int n, int m)
{
    int L[n+1][m+1];
   int i, j;

   for (i=0; i<=n; i++)
   {
     for (j=0; j<=m; j++)
     {

       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if (x[i-1] == y[j-1])
         L[i][j] = L[i-1][j-1] + 1;

       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }

   return L[n][m];
}

int main()
{

//freopen("subseq.txt","w",stdout);

char s1[1000],s2[1000];

while(scanf("%s %s",&s1,&s2)!=EOF)
{

string x,y;

for(int i=0;i<1000;i++)
{
    if(s1[i]=='\0'){break;}
    x.push_back(s1[i]);
}

for(int i=0;i<1000;i++)
{
    if(s2[i]=='\0'){break;}
    y.push_back(s2[i]);
}

//cout<<x<<" "<<y<<"\n";

int n=x.length();
int m=y.length();

int r=lcs(x,y,n,m);

printf("%d\n",r);

}

return 0;
}

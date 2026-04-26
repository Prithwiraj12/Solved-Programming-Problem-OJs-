#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)



int main()
{

    char str[5010];
    int m[5010][5010];
    int n;
    scanf("%d",&n);
    getchar();
    scanf("%s",str);
    for(int i=n-1; i>=0; --i)
    {
        m[i][i] = 0;
    }

    for(int i=n-1; i>=0; --i)
    {
        for(int j=i+1; j<n; ++j)
        {
            int& pos=m[i][j];
            if(str[i] == str[j])
            {
                pos = m[i+1][j-1];
            }
            else
            {
                pos = 1 + min(m[i+1][j],m[i][j-1]);
            }
        }
    }
    cout<<m[0][n-1]<<endl;
}

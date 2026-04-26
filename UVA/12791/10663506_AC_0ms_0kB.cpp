#include<bits/stdc++.h>

using namespace std;

int main()
{




    int x,y;
    while (scanf("%d %d",&x,&y)!=EOF)
    {
        int diff = y-x;
        int ans = y/diff;
        if(y%diff != 0)
        {
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;


    return 0;
}

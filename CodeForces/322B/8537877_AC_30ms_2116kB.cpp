#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r,b,g,y,z;
    scanf("%d %d %d",&r,&b,&g);
    int ans=((r/3)+(b/3)+(g/3));
    int x=r%3;
    y=b%3;
    z=(g%3);

    if(x+y+z==4&&r!=0&&b!=0&&g!=0)
    {
        z=1;
        cout<<ans+z<<endl;
    }
    else
    {
        y=min(x,y);
        z=min(y,z);
        cout<<ans+z<<endl;
    }
    return 0;
}

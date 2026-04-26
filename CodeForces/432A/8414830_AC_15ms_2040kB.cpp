#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,z;
    scanf("%d %d",&n,&k);
    int ara[n],cnt=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        z=(ara[i]+k);
        if(z<=5)cnt++;
    }
    //cout<<cnt<<endl;
    int ans=(cnt/3);
    cout<<ans<<endl;
}

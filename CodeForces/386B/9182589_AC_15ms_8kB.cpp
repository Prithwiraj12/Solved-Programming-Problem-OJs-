#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    scanf("%d",&n);
    int ara[n],vis[n],visit[n];
    for(int i=0; i<n; i++)scanf("%d",&ara[i]);
    for(int i=0; i<n; i++){visit[i]=0,vis[i]=0;}
    scanf("%d",&t);
    int ans=INT_MIN,cnt;
    sort(ara,ara+n);
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=i+1;j<n;j++)
        {
            if(abs(ara[i]-ara[j])<=t)
            {
                cnt++;
            }
            ans=max(ans,cnt);
        }
    }
    if(ans==INT_MIN)ans=0;
    cout<<ans+1<<endl;
    return 0;
}


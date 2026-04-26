#include<bits/stdc++.h>

using namespace std;

int main()
{
long long int n,x,y,xmx=INT_MIN,xmn=INT_MAX,ymx=INT_MIN,ymn=INT_MAX,difx,dify;
scanf("%lld",&n);
while(n--)
{
scanf("%lld %lld",&x,&y);
xmn=min(xmn,x);
xmx=max(xmx,x);
ymn=min(ymn,y);
ymx=max(ymx,y);
}
difx=(xmx-xmn);
dify=(ymx-ymn);
long long int ans=max(difx,dify);
ans=ans*ans;
cout<<ans<<endl;

return 0;
}

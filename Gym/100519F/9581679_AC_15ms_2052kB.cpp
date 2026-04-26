#include<bits/stdc++.h>

using namespace std;

int main()
{

double xa,ya,xb,yb,xc,yc,ans,res,store,w,x,y,z,D,V,W,raj,riz,dimitry,alex,petr;
scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&xb,&yb,&xc,&yc);
scanf("%lf %lf",&D,&V);
string str;
getchar();

getline(cin,str);

scanf("%lf",&W);

ans=fabs(((xa-xc)*(xa-xc))+((ya-yc)*(ya-yc)));
//cout<<ans<<endl;
ans=sqrt(ans);
//cout<<ans<<endl;
res=fabs(((xc-xb)*(xc-xb))+((yc-yb)*(yc-yb)));
res=sqrt(res);
//cout<<res<<endl;
store=fabs(((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb)));
store=sqrt(store);
w=(str[1]-'0')+(10*(str[0]-'0'));
x=(str[4]-'0')+(10*(str[3]-'0'));
y=(str[7]-'0')+(10*(str[6]-'0'));
z=(str[10]-'0')+(10*(str[9]-'0'));
raj=(w-9)*60;
riz=x;
raj=raj+riz;
//cout<<raj<<endl;
dimitry=(y*60)+(z)+raj;
alex=((((ans+res)/V))*60)+D;
//cout<<alex<<endl;

petr=(store/W)*60;
if(((xc-xa)*(ya-yb))==((yc-ya)*(xa-xb)))petr=petr+D;
if(dimitry>alex)
{
    if(alex<petr)
    {
        cout<<"Alex"<<endl;
    }
    else
    {
        cout<<"Petr"<<endl;
    }
}
else
{
    if(dimitry<petr)
    {
        cout<<"Dmitry"<<endl;
    }
    else
    {
        cout<<"Petr"<<endl;
    }
}




return 0;
}

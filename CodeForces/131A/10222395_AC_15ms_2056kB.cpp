#include<bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    getline(cin,x);
    int s=x.size();
    int cnt=0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]>='A'&&x[i]<='Z')cnt++;
    }
    if(cnt==s-1&&x[0]>='a'&&x[0]<='z')
    {
        x[0]=x[0]-32;
        for(int i=1; i<x.size(); i++)
        {
            x[i]=x[i]+32;
        }
    }
    else if(cnt==s)
    {
        for(int i=0; i<x.size(); i++)
        {
            x[i]=x[i]+32;
        }
    }
    else if(s==1&&x[0]>='a'&&x[0]<='z')x[0]=x[0]-32;

    else x=x;

    cout<<x<<endl;


    return 0;
}

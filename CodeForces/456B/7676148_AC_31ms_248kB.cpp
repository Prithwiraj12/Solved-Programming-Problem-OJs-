#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,len;
    string s;
    getline(cin,s);

    if(s.size()==1)
    {
        if((s[s.size()-1]=='4'||s[s.size()-1]=='8'||s[s.size()-1]=='0'))cout<<4<<endl;
        else cout<<0<<endl;
    }
    else
    {
        a=(s[s.size()-1]-'0')%10;
        b=(s[s.size()-2]-'0')%10;
        len=(a*1)+(b*10);
        if((len)%4==0)cout<<4<<endl;
        else cout<<0<<endl;
    }


    return 0;
}


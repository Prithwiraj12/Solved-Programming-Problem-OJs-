#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int z=0,y=0;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
        int x=str[i];
        if(x>=33&&x<=126){if(str[i]=='H'||str[i]=='Q'||str[i]=='9')z=1;}
        else y=1;
    }
    if(z==1&&y!=1)printf("YES\n");
    else printf("NO\n");
}

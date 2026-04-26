#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,str2;
    int z=1,y=1,cont=1,cnt=1;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        {

            cnt++;
            if(cnt>=7)z=0;
            //if(cnt)
        }
       else {//z=1;
       cnt=0;}
    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='1')
        {

            cont++;
            if(cont>=7)y=0;
        }
       else{ //y=1;
       cont=0;}
    }
    if(z==0||y==0)printf("YES\n");
    else printf("NO\n");
}



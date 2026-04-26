#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int main()
{

int t;
scanf("%d",&t);

getchar();

for(int i=0;i<t;i++)
{

string proto,host,port,path;

char c;

getline(cin,proto,':');

cin>>c>>c;

for(;;)
{
    scanf("%c",&c);
    if(c>='a' && c<='z')
    {
        host.push_back(c);
    }
    else if(c>='A' && c<='Z')
    {
        host.push_back(c);
    }
    else if(c>='0' && c<='9')
    {
        host.push_back(c);
    }
    else if(c=='.' || c=='-')
    {
        host.push_back(c);
    }
    else
    {
        break;
    }
}

if(c==':')
{
    for(;;)
    {
        scanf("%c",&c);
        if(c>='0' && c<='9')
        {
            port.push_back(c);
        }
        else
        {
            break;
        }
    }
}

if(c=='/')
{
    getline(cin,path,'\n');
}

printf("URL #%d\n",i+1);

cout<<"Protocol = "<<proto<<endl;

cout<<"Host     = "<<host<<endl;

if(port.length()!=0)
{
    cout<<"Port     = "<<port<<endl;
}
else
{
    cout<<"Port     = <default>"<<endl;
}

if(path.length()!=0)
{
    cout<<"Path     = "<<path<<endl;
}
else
{
    cout<<"Path     = <default>"<<endl;
}

cout<<endl;

}

return 0;
}
#include<bits/stdc++.h>

using namespace std;

int cnt=0,n,t;
string str;

void rec()
{
    if(cnt==t)return;
    for(int i=0; i<str.size()-1; i++)
    {
        if(str[i]=='B'&&str[i+1]=='G')
        {
            char ch=str[i];
            str[i]=str[i+1];
            str[i+1]=ch;
            i++;

        }

    }
    cnt++;
        rec();
}
int main()

{

    scanf("%d %d",&n,&t);

    getchar();

    getline(cin,str);
    rec();

    cout<<str<<endl;

}

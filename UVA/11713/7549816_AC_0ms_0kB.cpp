#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,len,x;
    cin>>a;
    getchar();
    while(a--)
    {
        string b,c;
        getline(cin,b);
        getline(cin,c);
        if(b.size()!=c.size())cout<<"No"<<endl;
        else
        {
            for(int i=0, j=0; i<b.size(),j<c.size(); i++,j++)
            {
                if((b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')&&(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'))
                {
                    x=1;//;cout<<"Yes"<<endl;
                }
                else if(b[i]==c[j])x=1;//cout<<"Yes"<<endl;
                else {x=0;
                break;}//cout<<"No"<<endl;
            }
            if(x==1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}


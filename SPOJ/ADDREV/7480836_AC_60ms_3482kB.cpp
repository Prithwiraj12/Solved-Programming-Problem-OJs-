#include<bits/stdc++.h>
using namespace std;
string func(int a)
{
    string x;
    stringstream ss;
    ss<<a;
    ss>>x;
    return x;

}

int fun(string a,string b)
{
    int x,y,k,m;
    stringstream ss,cc;
    ss<<a;
    cc<<b;
    ss>>x;
    cc>>y;
    k=x+y;
    return k;
}

int main()
{
    int a,b,k,c,l;
    scanf("%d",&l);
    while(l--)
    {
        string s1,s2,s3,s4,d;
        cin>>s1>>s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        b=fun(s1,s2);
        d=func(b);
        reverse(d.begin(),d.end());
        k=0,c=1;
        for(int i=0; i<d.size(); i++)
        {
            if(d[i]=='0'&&c==1)continue;
            else
            {
                s3+=d[i];

                c++;


            }
        }


        cout<<s3.c_str()<<endl;
    }
}


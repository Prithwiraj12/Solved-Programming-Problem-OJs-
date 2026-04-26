#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);

    //int x=str.size();
   vector<int>v;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='1'&&str[i]<='3')
        {
            v.push_back(str[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    int x=v.size();
    for(int i=0;i<v.size();i++)
    {
        printf("%d",v[i]);
        if(i!=v.size()-1&&x!=1)
        {
            printf("+");
        }
    }
    cout<<endl;
}

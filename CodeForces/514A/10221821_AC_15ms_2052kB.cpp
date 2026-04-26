#include<bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    getline(cin,x);
    for(int i=0; i<x.size(); i++)
    {
            if(i==0&&x[i]=='9')continue;
            else if(x[i]>='5')x[i]=((9-(x[i]-'0'))+'0');
            else
            {
                continue;
            }
    }

        cout<<x<<endl;

        return 0;
}

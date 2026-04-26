#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    getchar();
    string str;
    getline(cin,str);
    if(str[a-1]==str[b-1])cout<<0<<endl;
    else
    {
        cout<<1<<endl;
    }
    return 0;
}

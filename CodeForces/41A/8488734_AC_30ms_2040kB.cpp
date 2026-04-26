#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,str2;
    int z=0,y=0;
    getline(cin,str);
    getline(cin,str2);
    std::reverse(str2.begin(),str2.end());
    if(str==str2)printf("YES\n");
    else printf("NO\n");
}


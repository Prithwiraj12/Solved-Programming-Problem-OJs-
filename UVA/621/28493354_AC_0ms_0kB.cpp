#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    int N;
    cin>>N;
    getchar();
    while(N--)
    {
        string str;
        getline(cin,str);
        if(str=="1"||str=="4"||str=="78")cout<<"+"<<endl;
        else if(str.substr(str.size()-2,str.size()-1)=="35")cout<<"-"<<endl;
        else if(str[0]=='9'&&str[str.size()-1]=='4')cout<<"*"<<endl;
        else cout<<"?"<<endl;
    }

}

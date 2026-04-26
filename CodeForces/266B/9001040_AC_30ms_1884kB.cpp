#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,t;
    scanf("%d %d",&n,&t);
    getchar();
    string str;
    getline(cin,str);
    while(t--)
    {
        for(int i=0; i<str.size()-1; i++)
        {
            if(str[i]=='B'&&str[i+1]=='G')
            {
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }
    }
    cout<<str<<endl;

}
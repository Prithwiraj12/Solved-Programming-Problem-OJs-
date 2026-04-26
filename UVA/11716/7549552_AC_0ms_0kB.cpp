#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    char str[101][101];
    getchar();
    while(a--)
    {

        string s;
        getline(cin,s);
        int len=s.size();
        int x=sqrt(len);
        if(x*x!=len)cout<<"INVALID";
        else
        {
            int k=0,i,j;
            for(i=0; i<x; i++)
            {

                for(j=0; j<x; j++)
                {
                    str[i][j]=s[k];
                    k++;
                }
            }

            for(int j=0; j<x; j++)
            {
                for(int i=0; i<x; i++)
                {
                    printf("%c",str[i][j]);

                }

            }
        }
        cout<<endl;
    }
    return 0;
}


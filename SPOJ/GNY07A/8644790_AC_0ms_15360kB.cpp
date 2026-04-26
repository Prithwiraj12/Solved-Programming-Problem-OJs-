#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,m,i=1;
    scanf("%d",&n);
    string str;
    getchar();
    while(n--)
    {
        scanf("%d",&m);
        getchar();
        getline(cin,str);
        printf("%d ",i++);
        for(int i=0;i<str.size();i++)
        {
            //if(str[i]==str[m-1])z=1;
           if(i!=m-1) printf("%c",str[i]);
        }
        cout<<endl;
       // cout<<str<<endl;

    }
}

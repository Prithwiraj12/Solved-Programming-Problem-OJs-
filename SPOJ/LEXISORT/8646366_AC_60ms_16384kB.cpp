#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,m,i=1;
    scanf("%d",&n);
    string str;
    vector<string>v;
    getchar();
    while(n--)
    {
        v.clear();
        scanf("%d",&m);
        getchar();
        for(int i=1; i<=m; i++)
        {
            getline(cin,str);
            v.push_back(str);


        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<endl;
        }
    }
}


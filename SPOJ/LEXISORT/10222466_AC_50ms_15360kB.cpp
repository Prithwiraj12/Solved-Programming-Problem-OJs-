#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        string s;
        vector<string>v;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            cin.ignore();
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }
    }


return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string s;
    int k=1;
    vector<string>v;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        v.push_back(s);
        mp[s]=1;

    }
    for(int i=v.size()-1;i>=0;i--)
    {
        if(mp[v[i]]==1)
        {
            cout<<v[i]<<endl;
            mp[v[i]]=0;
        }
    }

return 0;
}

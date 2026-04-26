#include<bits/stdc++.h>

using namespace std;



int main()

{
    int n,a;
    scanf("%d",&n);
    vector<long long int>v;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int q,x;
    scanf("%d",&q);
    while(q--)
    {
        cin>>x;
        vector<long long int>:: iterator it;
        it=upper_bound(v.begin(),v.end(),x);
      if(it-v.begin()==0)
      {
          cout<<"0"<<endl;
      }
      else{cout<<it-v.begin()<<endl;;}

    }


    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int limit=1;
    int ans=a*c/b+1;
    while(ans>limit)
    {
        int res=(limit+ans)/2;
        if(a*c<=(res+c)*b)
        {
            ans=res;
        }
        else
        {
           limit=res+1;
        }
    }

   cout<<limit<<endl;



return 0;
}

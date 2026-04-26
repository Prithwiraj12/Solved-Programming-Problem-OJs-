#include<bits/stdc++.h>

using namespace std;


int main()

{

    int n,t;
    scanf("%d %d",&n,&t);
    int ara[n+1];
    for(int i=1; i<n; i++)scanf("%d",&ara[i]);

    for(int i=1; i<n;)
    {
        //cout<<9<<endl;
        i=i+ara[i];
        if(i==t)
        {
            cout<<"YES"<<endl;
            break;
        }
        if(i>t)
        {
            cout<<"NO"<<endl;
            break;
        }
    }


}



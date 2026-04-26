#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int x=sqrt(n);
    int k=1,cnt=0;;
    for(int i=1;i<=x;i++)
    {
       for(int j=i;i*j<=n;j++)
       {
           cnt++;
       }


    }
    cout<<cnt<<endl;
}

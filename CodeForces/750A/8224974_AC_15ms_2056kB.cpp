#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,k,z;
    scanf("%d %d",&n,&k);
    //double x=(k/60);


    int cnt=0,y;
    for(int i=5;;i+=5)
    {

        y=i+y;
        //z=y/60;
        if(y+k>240)break;
         cnt++;
        if(cnt==n)break;

    }
    cout<<cnt<<endl;
}


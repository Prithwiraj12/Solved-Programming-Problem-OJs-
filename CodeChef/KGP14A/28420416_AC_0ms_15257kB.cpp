#include<bits/stdc++.h>

using namespace std;

int main()
{

    int test;
    cin>>test;
    for(int k=1;k<=test;k++)
    {

        int n;
        cin>>n;
        int height[n],pencil[n];
        for(int i=0; i<n; i++)
        {

            cin>>height[i];

        }

        for(int i=0; i<n; i++)
        {

            cin>>pencil[i];


        }
        sort(height,height+n);
        sort(pencil,pencil+n);
        int sum=0;
        for(int i=0; i<n; i++)
        {

            sum+=abs(height[i]-pencil[i]);


        }

        cout<<"Case "<<k<<": "<<sum<<endl;

    }




}

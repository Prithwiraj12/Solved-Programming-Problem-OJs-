#include<bits/stdc++.h>

using namespace std;
//int arra[1000000000];
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n],arra[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
        arra[i]=ara[i];

    }
    sort(ara,ara+n);
    if(ara[0]==ara[1])cout<<"Still Rozdil"<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(ara[0]==arra[i])
            {
                cout<<i+1<<endl;
                break;
            }


        }
    }


    return 0;
}

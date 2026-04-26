#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, ara[100000];
    cin>>n>>t;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &ara[i]);
    }

    int j=0, time=0;
   
    while (j < n && time + ara[j] <= t)
    {
        time += ara[j++];
    }
    int maxi=j;
    
    for (int i = 0; i < n; ++i)
    {
        time -= ara[i];
        while (j < n && time + ara[j] <= t)
        {
            time += ara[j++];
        }
        if (j - i - 1 > maxi)
        {
            maxi = j - i - 1;
        }
    }
   cout<<maxi<<endl;
    return 0;
}

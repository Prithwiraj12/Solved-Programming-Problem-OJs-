#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,n,a,d;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d %d",&n,&a,&d);
        int total=n*((2*a)+(n-1)*d)/2;
        cout<<total<<endl;
    }
    return 0;
}


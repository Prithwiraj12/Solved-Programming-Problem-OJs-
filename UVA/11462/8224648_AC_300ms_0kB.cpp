#include<bits/stdc++.h>
using namespace std;

int main()

{
    int test;
    while(scanf("%d",&test)&&test!=0)
    {
        int ara[test];
        for(int i=0; i<test; i++)scanf("%d",&ara[i]);
        sort(ara,ara+test);
        for(int i=0; i<test; i++)
        {
           printf("%d",ara[i]);
           if(i!=test-1)printf(" ");
        }
        cout<<endl;
    }
}

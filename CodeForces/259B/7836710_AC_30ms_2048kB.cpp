#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,ara[3][3],a,b,c,sum,sum1,sum2;;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    a=ara[0][1]+ara[2][1];

    b=ara[2][0]+ara[2][1];
    c=ara[2][0]+ara[1][0];
    sum=(a-c);

    ara[0][0]=(b+sum)/2;
    ara[1][1]=(b-ara[0][0]);
    ara[2][2]=(a-ara[0][0]);
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {

            printf("%d",ara[i][j]);
            if(j!=2)printf(" ");
        }
        cout<<endl;
    }
    //cout<<ara[0][0]<<ara[1][1]<<ara[2][2];
    return 0;
}


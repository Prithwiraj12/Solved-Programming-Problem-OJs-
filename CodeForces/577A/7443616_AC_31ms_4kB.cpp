#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,x;
    scanf("%d %d",&a,&b);

        for(int i=2; i<=a; i++)
        {

            if(b%i==0)
            {
                if(i<=a&&(b/i)<=a)
                {
                    c++;

                }
            }
        }
        if(b<=a)
        {
            x=c+1;
        }
        else x=c;
        cout<<x<<endl;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,p,y=0;
    scanf("%d",&a);
    while(a--)
    {
        y++;
        scanf("%d %d",&b,&c);

        for(int i=1; i<=c; i++)
        {				            p=1;
            for(int j=1; j<=b; j++)
            {

                for(int k=1; k<=p; k++)
                {
                    printf("%d",p);



                }
                p++;
                printf("\n");
            }

                int x=b-1;
                for(int j=1; j<=b-1; j++)
                {

                    for(int k=1; k<=x; k++)
                    {
                        printf("%d",x);
					}
                    x--;
                    if(a==0&&x==0&&i==c)break;

				 printf("\n");
                }
            //if(a==x&&i==c)break;

        printf("\n");
            }
        }
   }

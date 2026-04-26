#include<bits/stdc++.h>
using namespace std;

int arra[13];
int  ara[6];
int flag[6];
int n,cont=0;
vector<int>raj;

void rec(int pos)
{
    if(raj.size()==6)
    {
        for(int i=0; i<6; i++)
        {
            if(i!=0)cout<<" "<<raj[i];
            else cout<<raj[i];
        }
        cout<<endl;
        return;
    }


    for(int i=pos; i<n; i++)
    {
        raj.push_back(arra[i]);
        rec(i+1);
        raj.pop_back();

    }
}

int main()
{
    int a,b;
     int flag=1;

    for(;;)
    {
    	scanf("%d",&n);
        if(n==0)
      break;
    	if(flag>1)
			cout<<endl;
    	++flag;

        for(int i=0; i<n; i++)
        {
            scanf("%d",&arra[i]);

        }
         rec(0);
    }


    return 0;
}


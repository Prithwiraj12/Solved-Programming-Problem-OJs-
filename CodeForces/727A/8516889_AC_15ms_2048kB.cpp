#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	m   	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;


int main()
{
    int a,b,z=0,cnt;
    vector<int>v;
    sf("%d %d",&a,&b);
     v.push_back(b);
    int c=b%10;
    if(c%2==1&&c!=1)pf("NO\n");
    else
    {
    	//cout<<875<<endl;
        cnt=1;
        for(int i=b;;)
        {
            if(i<a)
            {
                z=1;
                break;
            }
            if(i%10==1)
            {
                i=(i/10);
                cnt++;
                //cout<<i<<endl;
                v.push_back(i);
            }
            if(i==a)
            {
                pf("YES\n");
                z=2;
                break;
            }
            if(i%2==0){i=i/2;
            cnt++;
            v.push_back(i);
            //cout<<i<<endl;
            }

            if(i==a)
            {
                pf("YES\n");
                z=2;
                break;
            }
            if(i%10!=1&&i%2!=0)
			{
				z=1;
				break;
			}

        }
        if(z==2)
        {
            cout<<cnt<<endl;

            for(int i=v.size()-1;i>=0;i--)
			{
					pf("%d",v[i]);
					if(i!=0)pf(" ");

			}
			cout<<endl;
        }
        if(z==1)pf("NO\n");
    }

    return 0;
}

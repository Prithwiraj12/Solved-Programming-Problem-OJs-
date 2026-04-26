#include<bits/stdc++.h>
using namespace std;
int arr[10000];

int main()
{
    int a,b,c,z;
    scanf("%d",&a);
    while(a--)
    {
    	memset(arr,0,sizeof(arr));
        cin>>b>>c;
        int ara[c];
        for(int i=0; i<c; i++)
        {
            scanf("%d",&ara[i]);
        }
        vector<int>abc,abz;
        for(int i=0; i<c; i++)
        {
        	int x=0,d;
            while(ara[i]<=b)
            {
				x++;
				if(x==1)d=ara[i];
				//cout<<ara[i]<<endl;
                abc.push_back(ara[i]);

                ara[i]=ara[i]+d;

            }
        }
        sort(abc.begin(),abc.end());
        for(int i=0; i<abc.size(); i++)
        {

            if((abc[i]%7!=0)&&(abc[i]%7!=6))abz.push_back(abc[i]);
            //cout<<abz[i]<<endl;
        }
        //cout<<abc.size()<<endl;
        abc=abz;
        for(int i=0;i<abc.size();i++)
		{
			arr[abc[i]]=1;
			//cout<<arr[abc[i]]<<endl;
		}
		z=0;
		for(int i=0;i<10000;i++)
		{
			if(arr[i]==1)z++;
		}
		cout<<z<<endl;
    }

    return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{

int t;
scanf("%d",&t);

for(int i=0;i<t;i++)
{

    int n;
    scanf("%d",&n);

    int ss[n],es[n];

    map<int,int> mp;

    pair<map<int,int>::iterator,bool> rt;

    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&ss[i],&es[i]);

        rt=mp.insert(pair<int,int>(ss[i],es[i]));

        if(rt.second==false)
        {
            if(es[i]<(rt.first)->second)
            {
                mp.erase(rt.first);
                mp.insert(pair<int,int>(ss[i],es[i]));
            }
        }

    }

    /*
    for(map<int,int>::iterator i=mp.begin();i!=mp.end();i++)
    {
        printf("%d %d\n",i->first,i->second);
    }
    */

    multimap<int,int> mp2;

    for(map<int,int>::iterator i=mp.begin();i!=mp.end();i++)
    {
        mp2.insert(pair<int,int>(i->second,i->first));
    }

    int mx=1;

    int cur=mp2.begin()->first;

    for(multimap<int,int>::iterator i=mp2.begin();i!=mp2.end();i++)
    {
        if(i->second>=cur)
        {
            mx++;
            cur=i->first;
        }
    }


    printf("%d\n",mx);

}

return 0;
}
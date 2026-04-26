#include<bits/stdc++.h>

using namespace std;

struct name{

        int start,endd;

};

name ara[1000003];

bool compare(name a,name b)
{
    return a.endd<b.endd;
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int w;
        cin>>w;
        for(int i=0;i<w;i++)
        {
            scanf("%d %d",&ara[i].start,&ara[i].endd);
        }
        sort(ara,ara+w,compare);
      int ed=ara[0].endd;
      int cnt=1;
//      for(int i=0;i<w;i++)
//      {
//          cout<<ara[i].start<<" "<<ara[i].endd<<endl;
//      }
      for(int i=1;i<w;i++)
      {
          if(ara[i].start>=ed)
          {
              cnt++;
              ed=ara[i].endd;
          }
      }
      cout<<cnt<<endl;

    }


return 0;
}

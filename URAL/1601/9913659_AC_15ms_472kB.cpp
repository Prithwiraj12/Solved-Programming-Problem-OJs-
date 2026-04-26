/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int ln=s.length(),cnt=0;
       // s[0]=toupper(s[0]);
        for(int j=ln-1; j>=0; j--){
            s[j]=tolower(s[j]);
            if(j==0) s[j]=toupper(s[j]);
            if(s[j]=='.'|| s[j]=='?'|| s[j]=='!'){
                cnt++;
                if(cnt>=2){
                    s[j+1]=toupper(s[j+1]);
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
*/
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    char ch='.';
    int a;
    while(getline(cin,st))
    {
        int len = st.length();
        if(ch=='.'||ch=='?'||ch=='!')a=1;
        else a=0;
        //cout<<a<<" "<<ch<<endl;
        for(int i=a; i<len; i++)
        {
        //cout<<i<<endl;
            if(st[i]>=65 && st[i]<=90) st[i] = st[i]+32;
            else if(st[i]=='.'||st[i]=='!'||st[i]=='?')
            {
                i+=1;

            }

        }
         ch=st[len-1];
        //cout<<ch<<endl;
        cout<<st<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    string s;
    char punc=1;
    while(getline(cin,s)){
        for(int i=0; s[i]; i++){
            if(isalpha(s[i])){
                if(punc) punc=0;
                else  s[i]=tolower(s[i]);
            }
            else if(s[i]=='.'|| s[i]=='?'|| s[i]=='!'){
                   punc=1;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}

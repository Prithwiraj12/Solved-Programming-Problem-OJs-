#include<bits/stdc++.h>

using namespace std;

int main()

{
    string str;
    int cnt=0;
    int test;
    scanf("%d",&test);

    getchar();
    while(test--)
    {
            getline(cin,str);
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==str[i+1])
            {
                cnt++;
            }
            else
            {
                //cnt=0;
                cout<<cnt+1<<str[i];
                cnt=0;
            }

        }
        cout<<endl;
    }
}


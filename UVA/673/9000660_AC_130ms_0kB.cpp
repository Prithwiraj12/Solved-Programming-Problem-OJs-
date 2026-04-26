#include<bits/stdc++.h>

using namespace std;


int main()

{

    int test,z;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        z=0;
        string str;
        stack<char>xx;
        // xx.clear();
        getline(cin,str);

        if(str.size()==0)cout<<"Yes"<<endl;
        else
        {
            for(int i=0; i<str.size(); i++)
            {

                if(str[i]==')')
                {

                    if(xx.size()==0)
                    {
                        cout<<"No"<<endl;
                        z=1;
                        break;
                    }
                    else if(xx.top()=='(')
                    {
                        xx.pop();
                    }
                    else
                    {
                        cout<<"No"<<endl;
                        z=1;
                        break;
                    }
                }
                else if(str[i]==']')
                {

                    if(xx.size()==0)
                    {
                        cout<<"No"<<endl;
                        z=1;
                        break;
                    }
                    else if(xx.top()=='[')
                    {
                        xx.pop();
                    }
                    else
                    {
                        cout<<"No"<<endl;
                        z=1;
                        break;
                    }
                }
                else if(str[i]=='('||str[i]=='[')
                {
                    // cout<<str[i]<<endl;
                    xx.push(str[i]);
                }
            }

            if(xx.size()==0&&z==0)cout<<"Yes"<<endl;
            else if(z==0&&xx.size()!=0) cout<<"No"<<endl;

        }
    }


}


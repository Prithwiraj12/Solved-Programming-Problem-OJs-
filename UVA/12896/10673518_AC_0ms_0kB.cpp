#include<bits/stdc++.h>

using namespace std;



int main()
{
    int test;
    cin>>test;


    while(test--)
    {
        int len,x,arra[5000],arry[5000];
        cin>>len;
        char ch = '"';
        for(int i=1; i<=len; i++)
        {
            cin>>arra[i];

        }
        for(int i=1; i<=len; i++)
        {
            cin>>arry[i];

        }
        for(int i=1; i<=len; i++)
        {
            if(arra[i]==0)
            {
                if(arry[i]==1)
                {
                    cout<<" ";
                }
            }
            if(arra[i]==1)
            {
                if(arry[i]==1)
                {
                    cout<<".";
                }
                else if(arry[i]==2)
                {
                    cout<<",";
                }
               else if(arry[i]==3)
                {
                    cout<<"?";
                }
                else if(arry[i]==4)
                {
                    cout<<ch;
                }
            }
            if(arra[i]==2)
            {
                if(arry[i]==1)
                {
                    cout<<"a";
                }
                else if(arry[i]==2)
                {
                    cout<<"b";
                }
                else if(arry[i]==3)
                {
                    cout<<"c";
                }
            }
            if(arra[i]==3)
            {
                if(arry[i]==1)
                {
                    cout<<"d";
                }
                else if(arry[i]==2)
                {
                    cout<<"e";
                }
                else if(arry[i]==3)
                {
                    cout<<"f";
                }
            }
            if(arra[i]==4)
            {
                if(arry[i]==1)
                {
                    cout<<"g";
                }
                else if(arry[i]==2)
                {
                    cout<<"h";
                }
                else if(arry[i]==3)
                {
                    cout<<"i";
                }
            }
            if(arra[i]==5)
            {
                if(arry[i]==1)
                {
                    cout<<"j";
                }
                else if(arry[i]==2)
                {
                    cout<<"k";
                }
                else if(arry[i]==3)
                {
                    cout<<"l";
                }
            }
            if(arra[i]==6)
            {
                if(arry[i]==1)
                {
                    cout<<"m";
                }
                else if(arry[i]==2)
                {
                    cout<<"n";
                }
                else if(arry[i]==3)
                {
                    cout<<"o";
                }
            }
            if(arra[i]==7)
            {
                if(arry[i]==1)
                {
                    cout<<"p";
                }
                else if(arry[i]==2)
                {
                    cout<<"q";
                }
                else if(arry[i]==3)
                {
                    cout<<"r";
                }
                else if(arry[i]==4)
                {
                    cout<<"s";
                }
            }
            if(arra[i]==8)
            {
                if(arry[i]==1)
                {
                    cout<<"t";
                }
                else if(arry[i]==2)
                {
                    cout<<"u";
                }
                else if(arry[i]==3)
                {
                    cout<<"v";
                }
            }
            if(arra[i]==9)
            {
                if(arry[i]==1)
                {
                    cout<<"w";
                }
                else if(arry[i]==2)
                {
                    cout<<"x";
                }
                else if(arry[i]==3)
                {
                    cout<<"y";
                }
                else if(arry[i]==4)
                {
                    cout<<"z";
                }
            }
        }
        cout<<endl;
    }


    return 0;
}

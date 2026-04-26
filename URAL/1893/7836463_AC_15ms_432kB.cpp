#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    char ch;
    scanf("%d",&a);
    scanf("%c",&ch);
    if(((a==1||a==2)&&(ch=='A'||ch=='D'))||((a>=3&&a<=20)&&(ch=='A'||ch=='F'))||((a>=21&&a<=65)&&(ch=='A'||ch=='K')))cout<<"window"<<endl;
    else if(((a==1||a==2)&&(ch=='B'||ch=='C'))||((a>=3&&a<=20)&&(ch=='B'||ch=='C'||ch=='D'||ch=='E'))||((a>=21&&a<=65)&&(ch=='C'||ch=='D'||ch=='G'||ch=='H')))cout<<"aisle"<<endl;
    else cout<<"neither"<<endl;
    return 0;
}


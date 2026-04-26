#include<bits/stdc++.h>

using namespace std;

int main()
{

int is[26];
int need[26];

for(int i=0;i<26;i++)
{
    is[i]=0;
    need[i]=0;
}

string s;
getline(cin,s,'\n');

for(int i=0;i<s.length();i++)
{
    need[s[i]-'A']++;
}

s.clear();

getline(cin,s,'\n');

for(int i=0;i<s.length();i++)
{
    need[s[i]-'A']++;
}

s.clear();

getline(cin,s,'\n');

for(int i=0;i<s.length();i++)
{
    is[s[i]-'A']++;
}

int ok=1;
for(int i=0;i<26;i++)
{
    if(is[i]==need[i])
    {
        ;
    }
    else
    {
        ok=0;
        break;
    }
}

if(ok)
{
    printf("YES\n");
}
else
{
    printf("NO\n");
}

return 0;
}
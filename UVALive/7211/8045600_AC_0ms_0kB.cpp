#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, m , i, cou=0;
    while(scanf("%d", &num)==1)
    {
        for(i=0, cou=0; i<5; i++)
        {
        scanf("%d", &m);
        if(m==num) cou++;
        }
    printf("%d\n", cou);
    }
    return 0;
}

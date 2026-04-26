#include<iostream>
using namespace std;

int main()
{
    int a, y, b, x;
    cin >> a>> y;
    int z = 0;
    b = y;
    x = y;

    for(int i = 1; i < a; i++)
    {
        cin >> y;
        if(y> b)
        {
            z++;
            b = y;
        }
        else if(y < x)
        {
            z++;
            x = y;
        }
    }

    cout << z << endl;
    return 0;
}


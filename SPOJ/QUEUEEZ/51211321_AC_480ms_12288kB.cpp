#include <iostream>
using namespace std;
long long Queue[10000005];
// I cannot figure out the Reason behind the TLE i dry ran my logic and it seems the code should work perfectly
int first = -1;          // to pop
int last = -1;           // to insert
void push(long long val) // function that push to the Queue
{
    if (last == -1 and first == -1) // if last and first is -1 then push the first element and make the first and last both point on 0
    {
        last++;
        Queue[last] = val;
        first++;
    }
    else
    {
        last++;            // else we just increment the last and push the val in the Queue
        Queue[last] = val; // insert the value
    }
}
void pop()
{
    if (first < last) // if first<=last means there are elements before the last inserted element
    {
        first++; // remove the first element
    }
    else if (first == last)
    {
        first = -1; // if first==last and we have to delete the element then we reset the pointers and make the Queue empty
        last = -1;
    }
}
void peek()
{
    if (first == -1 and last == -1) // check if the first and last index is -1 or not if -1 then they are equal
    {
        printf("Empty!\n");
        return;
    }
    printf("%ld\n", Queue[first]); // else print the element
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if (n == 1)
        {
             long long val;
            scanf("%ld",&val);
            push(val);
        }
        else if (n == 2)
        {
            pop();
        }
        else
        {
            peek();
        }
    }
}

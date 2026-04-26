#include<bits/stdc++.h>

using namespace std;
long long int ara[1000000],z;
long long int binarySearch( long long int x, long long int s, long long int e)
{
    if (e >= s)
    {
        long long int mid = s + (e - s)/2;

        if (ara[mid] == x)
        {
            for(long long int i=mid-1; i>=s; i--)
            {
                if(ara[mid]==ara[i])
                    mid=i;
            }
            return mid;

        }



        if (ara[mid] > x) return binarySearch(x, s, mid-1);


        return binarySearch( x,mid+1, e );
    }


    return -1;
}

int main()

{
    long long int n,q,x;
    scanf("%lld %lld",&n,&q);

    for(long long int i=0; i<n; i++)
    {
        scanf("%lld",&ara[i]);
    }
    for(long long int i=0; i<q; i++)
    {
        scanf("%lld",&x);
        z=0;
        long long int ans=binarySearch(x,0,n);
        printf("%lld\n",ans);
    }


    return 0;
}

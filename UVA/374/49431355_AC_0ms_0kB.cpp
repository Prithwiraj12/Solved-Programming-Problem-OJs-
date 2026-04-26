// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
#define ll long long int
 
int big_mod(int N, int P, int M)
{
    if(P == 0) return 1;
    ll ans = big_mod(N, P/2, M);
    if(P%2 == 0)
    {
        return ((ans%M)*(ans%M))%M;
    }
    else return ((N%M)*(ans%M)*(ans%M))%M;
}
 
int main() {
 
  int N, M, P;
 
  while(cin>>N>>P>>M)
  {
      cout<<big_mod(N, P, M)<<endl;
      //cout<<endl;
  }
 
    return 0;
}
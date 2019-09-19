#include<bits/stdc++.h>
using namespace std;
long long H(long long int n){

      long long res = 0,m;
      if(n%2!=0)
        m=n/2+1;
      else
        m=n/2;

     for( int i = 1; i <= n/2; i=i+1 ){

            res = (res + n/i);


      }

     return res+m;

}
int main()
{
    long long int i,j,k,m,n;

    scanf("%lld",&k);
    while(k--)
    {

        scanf("%lld",&n);
        printf("%lld\n",H(n));
    }
return 0;

}

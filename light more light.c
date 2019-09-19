#include<stdio.h>
#include<math.h>
int main()
{
   long long int n,k;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        k=sqrt(n);
        if(k*k==n)
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    return 0;
}

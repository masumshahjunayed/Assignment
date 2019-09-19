#include<stdio.h>
int main()
{
    long long int i,n,j,t,a[100008];
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld%lld%lld%lld%lld",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&t);
        for(j=6;j<=t;j++)
        {
            a[j]=a[j-1]+a[j-2]+a[j-3]+a[j-4]+a[j-5]+a[j-6];
        }
        printf("Case %lld: %lld\n",i,(a[t]%10000007));
    }
    return 0;
}

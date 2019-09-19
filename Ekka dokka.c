#include<stdio.h>
#include<math.h>
int main()
{
    int long long i,j,k,n,t,test;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {

        scanf("%lld",&t);
        printf("Case %lld: ",i);


        if(t%2==0){
        j=2;
        while(1)
        {
            if(t%j==0 && j%2==0 && ((t/j)%2)==1)
            {
                printf("%lld %lld\n",(t/j),j);
                break;
            }
             j++;
        }
        }
        else
            printf("Impossible\n");
    }
    return 0;
}

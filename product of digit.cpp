#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,j,a[5000],n,x,k,l,f;
    scanf("%lld",&n);
    for(l=1;l<=n;l++)
    {
        scanf("%lld",&x);
        j=0;
        f=0;
        if(x==1)
            printf("1\n");
        else{
        for(i=9;i>=2;i--)
        {
            while((x%i)==0 && x>=10)
            {
               a[j]=i;

               x=x/i;
               j++;
            }
        }
        if(x>=10)
            printf("-1\n");
        else{
        for(k=j-1;k>=0;k--){
                if(x<a[k]){
                printf("%lld%lld",x,a[k]);
                x=10;
                f=1;
                }
        else
            printf("%lld",a[k]);
        }
        if(f==0)
            printf("%lld\n",x);
        else
            printf("\n");
        }
        }
    }
    return 0;
}

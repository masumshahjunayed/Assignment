#include<stdio.h>
int main()
{
    int m,n,sum,k,l,c;
    scanf("%d",&c);
    for(l=1;l<=c;l++)
    {
        scanf("%d%d",&n,&m);
        sum=(n/2)*m;
        printf("Case %d: %d\n",l,sum);
    }
    return 0;
}

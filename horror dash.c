#include<stdio.h>
int main()
{
    int n,m,i,j,x,max;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        max=0;
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&x);
            if(max<x)
            {
                max=x;
            }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}

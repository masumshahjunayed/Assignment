#include<stdio.h>
int main()
{
    int n,m,s,a,f,sum,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        sum=0;
        for(j=0;j<m;j++)
        {
            scanf("%d%d%d",&s,&a,&f);
            sum+=(s*f);
        }
        printf("%d\n",sum);
    }
    return 0;
}

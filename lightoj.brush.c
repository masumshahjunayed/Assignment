#include<stdio.h>>
int main()
{
    int a,b,i,j,c,sum;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        sum=0;
        for(j=0;j<b;j++)
        {
            scanf("%d",&c);
            if(c>0)
            sum+=c;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}

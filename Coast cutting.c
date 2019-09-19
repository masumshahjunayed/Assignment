#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && b>c)
        {
            printf("Case %d: %d\n",i,b);
        }
        else if(b>a && a>c)
        {
            printf("Case %d: %d\n",i,a);
        }
         else if(b<a && a<c)
        {
            printf("Case %d: %d\n",i,a);
        }
         else if(b>a && b<c)
        {
            printf("Case %d: %d\n",i,b);
        }
         else
        {
            printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}

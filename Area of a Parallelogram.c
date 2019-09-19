#include<stdio.h>
int main()
{
    int i,n,a1,a2,b1,b2,c1,c2,x,d1,d2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);

       d1=a1+c1-b1;
       d2=a2+c2-b2;
       x=c1*(a2-b2)+a1*(b2-c2)+b1*(c2-a2);
       if(x<0)
        x=x*(-1);
       printf("Case %d: %d %d %d\n",i,d1,d2,x);

    }
    return 0;
}

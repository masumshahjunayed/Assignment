#include<stdio.h>
int main()
{

    int a,b,i,j,c,d,e,sum;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=0;
        scanf("%d%d",&b,&c);
        if(b<=c)
            sum=(c*4)+19;
        if(b>c)
        {
            d=b-c;
            e=d+b;
            sum=(e*4)+19;
        }


        printf("Case %d: %d\n",i,sum);
    }
    return 0;

}

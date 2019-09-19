#include <stdio.h>
int main()
{
    int u;
    long long  n,m, c,j=0, rem[1000],f=1 ,i,d,k,count=0;
   scanf("%d",&u);

   while(u--)
   {
    scanf("%lld",&n);

    while(f!=0)
    {
        d=n;
        i=0;
        while(n!=0)
        {

            rem[i]=n%10;
            n=n/10;
            i++;

        }
        j=0;
        c=0;
        while(i--)
        {
            c=c*10;
            c=c+rem[j];
            j++;
        }
        if(c==d)
        {
            f=0;
        }

        n=d+c;


    }
        printf("%lld ",d);
   }


return 0;
}

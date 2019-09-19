#include<stdio.h>
int main()
{
   long long  a , b ,i ,k ,c , borrow , sum;
   sum=0;

   for( k=0;k<3;k++)
   {
       scanf("%lld%lld%lld",&a,&b,&c);


       for(i=0;i<=c;i++)
       {
        sum=sum+i*a;
        borrow=sum-b;
       }
      if(borrow >0)
      {
        printf("%lld\n",borrow);

      }

       if(borrow<=0)
       {
        printf("0\n");
        break;
       }

   }
return 0;
}

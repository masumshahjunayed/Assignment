#include<stdio.h>
int main()

{
int n,m,a,b,t,r,i,j;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
        int sum=0;
       scanf("%d%d",&n,&m);
       if(n%2==0)
        n=n+1;
       else if(m%2==0)
        m=m-1;
      for(j=n;j<=m;j+=2)
      {
          sum=sum+j;
      }
       printf("Case %d: %d\n",i,sum);
   }

    return 0;
}

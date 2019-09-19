#include<stdio.h>
#include<math.h>
int main()
{
    int count=1,n;
    double u , v , t , a , s ;
     while(scanf("%d",&n)==1 && n!=0)
     {
         if(n==1)
         {
             scanf("%lf%lf%lf",&u,&v,&t);
             a=((v-u)/t);
             s=(u*t+0.5*a*t*t);
             printf("Case %d: %.3lf %.3lf\n",count,s,a);
         }
         else if(n==2)
         {
             scanf("%lf%lf%lf",&u,&v,&a);
             t=((v-u)/a);
             s=u*t+0.5*a*t*t;
             printf("Case %d :%.3lf %.3lf\n",count,s,t);
         }
         else if(n==3)
         {
             scanf("%lf%lf%lf",&u,&a,&s);
             v=sqrt(u*u+2*a*s);
             t=((v-u)/a);
             printf("Case %d: %.3lf %.3lf\n",count ,v,t);
         }
         else if(n==4)
         {
             scanf("%lf%lf%lf",&v,&a,&s);
             u=sqrt(v*v-2*a*s);
             t=((v-u)/a);
             printf("Case %d: %.3lf %.3lf\n",count,u,t);
         }
         count++;

     }
     return 0;
}

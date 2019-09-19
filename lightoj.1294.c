#include<stdio.h>
int main()
{
    int m,n,i,j,count,sum,k,l,c;
    scanf("%d",&c);
    for(l=1;l<=c;l++)
    {
        scanf("%d%d",&n,&m);
        count=1;
        sum=0;
        for(i=1;i<=n;)
        {

           j=1;
           while((count%2==1) && j<=m)
           {
               k=i;
               k=k*(-1);
               sum+=k;
               i++;
               j++;
           }

           while((count%2==0) && j<=m)
           {

               sum+=i;
               i++;
               j++;
           }
           count++;

        }
        printf("Case %d: %d\n",l,sum);
    }
    return 0;
}

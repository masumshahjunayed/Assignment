#include<stdio.h>
#include<math.h>
int main()

{
int n,m,ans,count,k,i;

       while(scanf("%d%d",&n,&m)==2)
       {
           if(n==0 && m==0)
            break;
           count=0;
        for(i=n;i<=m;i++)
        {
            k=sqrt(i);
            if(k*k==i){
                count++;
            }

        }
        printf("%d\n",count);
       }
    return 0;
}

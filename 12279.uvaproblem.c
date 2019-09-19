#include<stdio.h>
int main()
{
    int a[110],b,c,n,k,t=1,i;
    while((scanf("%d",&n))==1)
    {
        k=0;
        c=0;
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
       for(i=0;i<n;i++)
       {
           if(a[i]==0)
           {
             c++;
           }
           if(a[i]!=0)
           {
             k++;
           }
       }
       b=k-c;
       printf("Case %d: %d\n",t,b);
       t++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,m,i,j,x = 0,f,y=0,a[50000],ar[25000];


        scanf("%d",&n);
                 f=0;
        for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&ar[i]);
        }
        for(i=0;i<m;i++)
        {
            j=0;
             while(ar[i]>=a[j])
            {
                x=a[j];
                 if(ar[i]==a[j])
                {
                    x=a[j-1];
                    y=a[j+1];
                    f=1;
                        break;
                }
                 j++;
            }
            if(j>n)
            {
                x=a[j-1];
            }
            y=a[j];
             printf("%d ",x);
             if(j<n){

              printf("%d\n",y);
             }

             else if(j>=n)
                printf("X\n");



}


return 0;
}

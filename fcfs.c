#include <stdio.h>
int main()
{
 int i,j,a[10],b[10],temp[10],temp1,avg=0,n;

 printf("enter the number of Processes:\n");
 scanf("%d",&n);
 printf("enter arrival time\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter burst time\n");
 for(i=0;i<n;i++)
 scanf("%d",&b[i]);
 for(i=1;i<n;i++)
  for(j=1;j<n;j++)
   if(b[j]>b[j+1])
   {
    temp1=b[j];
    b[j]=b[j+1];
    b[j+1]=temp1;
   }
 temp[0]=0;
 for(i=0;i<n;i++)
  temp[i+1]=temp[i]+b[i];

 for(i=0;i<n+1;i++)
  printf("\n%d",temp[i]);
 for(i=1;i<n;i++)
  avg=avg+temp[i]-a[i];
 avg=avg/n;
 printf("\nThe Average WT is %d ms",avg);


return 0;
}

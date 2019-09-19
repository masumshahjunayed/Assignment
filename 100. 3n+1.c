
#include<stdio.h>
int main()
{
    int a,b,i,j,count2,count,o;
while(scanf("%d%d",&a,&b)==2)
{
    count=0;
    printf("%d %d ",a,b);
    if(a>b)
    {
     o=b;
     b=a;
     a=o;
    }
    for(i=a;i<=b;i++)
    {
      count2=1;
         j=i;
      while(j!=1)
      {
          if(j%2==0){
            j=j/2;
          }
          else{
            j=(3*j)+1;
          }
          count2++;
      }

      if(count2>=count)
        count=count2;
    }
    printf("%d\n",count);
}
return 0;
}

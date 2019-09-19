#include<stdio.h>
int main()
{
    long long int i,j,k=0,n,m=0,a[100000],count;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);

    }
    if(n>1){
    while(k<n)
    {
        count=1;
      for(j=k;j<n-1;j++)
      {

          if(a[j]>a[j+1])
            break;
          else
            count++;
      }
      k=j+1;

      if(count>m)
        m=count;
    }
    printf("%I64d\n",m);
    }
    else
    printf("1\n");
    return 0;


}

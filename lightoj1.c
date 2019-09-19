#include<stdio.h>
int main()
{
int n,a,b,x,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&x);
    a=x/2;
    b=x-a;
    printf("%d %d\n",a,b);
}
return 0;
}

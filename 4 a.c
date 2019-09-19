/*#include<stdio.h>
int ArraySum(int n[],int z)
{
    int i,sum=0;
    for(i=0;i<z;i++)
    {
        sum=sum+n[i];
    }
    return sum ;
}
int arrayavg(int b[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+b[i];
    }
    return sum/n;
}
int main()
{
    int a[50],n,i,u;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    u=ArraySum(a,n);
    printf("%d ",u);
    printf("%d",arrayavg(a,n));
    }*/
   #include <stdio.h>
int fact(int a);
int main(){
    printf("%d\n",fact(1));

    return 0;
}
int fact(int a){
    int factorial;
    if(a==1)
        return 1;
    else
        return a * fact(a-1);
}


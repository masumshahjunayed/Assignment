#include<stdio.h>
int main()
{
    int a,sum,b;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        while((a/10)!=0)
        {
            sum=0;
            while(a!=0){
           b=a%10;
           a=a/10;

           sum=sum+b;
            }
            a=sum;

        }

        printf("%d\n",a);

    }

    return 0;

}

#include<stdio.h>
int main()
{
    int a,b,i,c,count,n,m;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a>b)
        {
            m=a;
            a=b;
            b=m;
        }

        count =1;
        for(i=a;i<=b;i++){

                c=1;
        n=i;
        while(n!=1){
        if(n%2==1)
        {
            n=(3*n)+1;
        }
        else
            n=n/2;

        c++;
        }


        if(count<c)
        {
            count=c;
        }
    }
    printf("%d %d %d\n",a,b,count);

    }

return 0;
}

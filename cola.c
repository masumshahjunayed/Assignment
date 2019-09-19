#include<stdio.h>
int main()
{
    int i,a,b,x,y,count;
    while((scanf("%d",&a))==1)
    {
        count=0;
        while(a>0)
        {
            if(a<3)
            {
                count+=a;
                break;
            }
            x=a/3;
            y=a-(3*x);
            a=x+y;
            count+=(3*x);

        }
        if(count%3==2)
        printf("%d\n",count+1);
        else
             printf("%d\n",count);
    }
    return 0;
}

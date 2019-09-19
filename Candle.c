#include<stdio.h>
int main()
{
    int i,a,b,x,y,count;
    while((scanf("%d%d",&a,&b))==2)
    {
        count=0;
        while(a>0)
        {
            if(a<b)
            {
                count+=a;
                break;
            }
            x=a/b;
            y=a-(b*x);
            a=x+y;
            count+=(b*x);

        }
        printf("%d\n",count);
    }
    return 0;
}

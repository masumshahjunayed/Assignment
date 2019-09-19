#include<stdio.h>
int main()
{
    int day,h,d,f;
    double u,per,height;

    while(scanf("%d%lf%d%d",&h,&u,&d,&f)==4)
    {
        if(h==0)
            break;
        day=1;
        height=0;
        per=(f*u)/100;
        while(1)
        {
            height=height+u;
             if(u>0){
            u=u-per;;
           }

           if(height>h)
            break;
            height=height-d;
           if(height<0)
            break;
            day++;

        }
        if(height>h)
        printf("success on day %d\n",day);
        else
            printf("failure on day %d\n",day);

    }
    return 0;
}

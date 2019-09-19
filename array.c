#include<stdio.h>

int main()

{
    int temp[31],i,mn,mx,avg,day;
    printf("how many days in this month?");
    scanf("%d",&day);
    avg=0;
    for(i=0;i<day;i++)
    {
        printf("enter the noonday temperature for day %d\n",i+1);
        scanf("%d",&temp[i]);

    }
    avg=0;
    for(i=0;i<day;i++)
        avg=avg+temp[i];
    printf("average temperature:%d\n",avg/day);
    mn=200;
    mx=0;
    for(i=0;i<day;i++)
    {
        if(mn>temp[i])
            mn=temp[i];
            if(mx<temp[i])
            mx=temp[i];
    }
    printf("minimum temperature is %d\n",mn);
    printf("maximum temperature is %d\n",mx);

}

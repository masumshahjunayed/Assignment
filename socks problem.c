#include<stdio.h>
int main()
{
    int s,m,d;
    while((scanf("%d%d",&s,&m))==2)
    {
        d=0;
        while(s--)
        {
            d++;
            if((d%m)==0)
            {
                s++;
            }
        }
        printf("%d\n",d);

    }
    return 0;
}

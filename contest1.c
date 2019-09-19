#include<stdio.h>
int main()
{
    int b,a,c,x,y;
    while((scanf("%d",&a))==1)
    {
        b=(a/2);
        c=a-b;
        x=(a/2)+1;
        y=a-x;
        if(a!=2){
        if((((b%2)==0)&&((c%2)==0)) || (((x%2)==0)&&((y%2)==0)))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
        }
        else if(a==2)
            printf("NO\n");
    }
    return 0;
}

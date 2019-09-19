#include<stdio.h>
int main()
{
    int i,j,k,a[103],x=0,y,f,n,sum,p;
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
        x+=a[i];
    }
    scanf("%d",&k);
    for(j=0;j<k;j++)
    {
        scanf("%d",&y);
        f=0;
        for(i=0;i<p;i++)
        {
            if(a[i]==y)
            {
                f=1;
            }
        }
        if(f==0)
            x+=y;
    }
    if(sum==x)
    printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
    return 0;
}

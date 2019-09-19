#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,t,n,x,y,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&n);
        printf("Case %d:\n",i);
        for(j=0;j<n;j++)
        {
            scanf("%d%d",&x,&y);
            if(x1<=x && x<=x2 && y1<=y && y<=y2)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,n,a[200],x=0,y=0,pos,pos2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {

        if(a[i]%2!=0)
        {
           x++;
           pos=i;
        }
        else if(a[i]%2==0)
        {

            y++;
            pos2=i;
        }

    }
    if(y==1)
        printf("%d\n",pos2);
    else
    printf("%d\n",pos);
    return 0;
}

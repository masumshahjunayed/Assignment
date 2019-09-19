#include<stdio.h>
int main()
{
    char a[101][21];
    int i,j,t,n,l,h,w,sum,avg,x[101],z,y,test,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        sum=0;
        test=0;
        for(k=0;k<n;k++)
        {
            scanf("%s",a[k]);
            scanf("%d%d%d",&h,&l,&w);
            x[k]=h*l*w;
            sum+=x[k];
        }
        avg=sum/n;
        for(j=0;j<n;j++)
        {
            if(x[j]>avg)
                y=j;
            else if(x[j]<avg)
            {
                z=j;
                test=1;
            }
        }
        if(test==0)
            printf("Case %d: no thief\n",i);
        else
            printf("Case %d: %s took chocolate from %s\n",i,a[y],a[z]);
    }
    return 0;
}

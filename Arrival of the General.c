#include<stdio.h>
int main()
{
    int n,i,j,min,max,a[1010],pm=1,pmi=1,rmi,rm,res;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[1];
    max=a[1];
    for(j=1;j<=n;j++)
    {
        if(a[j]<=min)
        {
            min=a[j];
            pmi=j;

        }
        else if(a[j]>max)
        {
            max=a[j];
            pm=j;

        }
    }
    if(pmi<pm)
    {
        rm=pm-1;
        rmi=n-pmi-1;
    }
    else if(pmi>pm)
    {
        rm=pm-1;
        rmi=n-pmi;
    }
    res=rm+rmi;
    printf("%d\n",res);
    return 0;
}

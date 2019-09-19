#include<stdio.h>
int main()
{
    int a[20][20],i,j,n,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i][0]=1;
    }
    for(i=0;i<n;i++)
    {
        a[0][i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    printf("%d\n",a[n-1][n-1]);
    return 0;
}

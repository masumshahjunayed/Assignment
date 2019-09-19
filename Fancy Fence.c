#include<stdio.h>
int main()
{
    int i,n,k,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        k=180-m;
        if(360%k==0)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}

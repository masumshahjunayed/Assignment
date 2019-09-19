#include<stdio.h>
int main()
{
    int i,j,n,k,len,s;
    char a[100];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(a);
        len=strlen(a);
        printf("Case %d: ",i);
        s=0;
        k=0;
        for(j=len-1;j>=0;j--)
        {
            if(a[j]!=a[k])
            {
                printf("No\n");
                s=1;
                break;
            }
            k++;
        }
        if(s==0)
            printf("Yes\n");
    }
    return 0;
}

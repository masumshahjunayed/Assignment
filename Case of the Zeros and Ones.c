#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    char a[200001];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;i<n;i++)
    {

        if(a[i]=='0')
        {
            count++;
        }
    }
    count=count*2;
    if(count>n)
            printf("%d\n",count-n);
    else
        printf("%d\n",count-n);
    return 0;
}

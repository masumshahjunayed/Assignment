#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n;
    char s[120];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        scanf("%d%d",&j,&k);
        if(i>0 || k>=30)
        {
            printf("%s\n",s);
        }
    }
    return 0;
}

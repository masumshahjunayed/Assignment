#include<stdio.h>
int main()
{
    int i,j,k,n,x[102],y[101],len1,len2,count1,count2,count;
    char a[101],b[101];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        k=0;

        gets(a);
        gets(b);
        len1=strlen(a);
        len2=strlen(b);
        for(j=0;j<len1;j++)
        {
            if('a'<=a[j] && 'z'>=a[j])
            {
                x[k]=a[j]-'a';
                k++;
            }
           else  if('A'<=a[j] && 'Z'>=a[j])
            {
                x[k]=a[j]-'A';
                k++;
            }
        }
        count1=k-1;
        k=0;
        for(j=0;j<len2;j++)
        {
            if('a'<=b[j] && 'z'>=b[j])
            {
                y[k]=b[j]-'a';
                k++;
            }
           else  if('A'<=b[j] && 'Z'>=b[j])
            {
                y[k]=b[j]-'A';
                k++;
            }
        }
        count2=k-1;
        count=0;
        for(j=0;j<=count1;j++)
        {

            for(k=0;k<=count2;k++)
            {

                if(x[j]==y[k])
                {

                    count++;
                    y[k]=28;
                }
            }
        }
        if((count-1)==count1 && count2==(count-1))
            printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);

    }
    return 0;
}

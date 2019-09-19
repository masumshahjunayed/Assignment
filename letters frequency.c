#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,a[26],len,n,max;
    char s[1005],c;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        for(k=0;k<26;k++)
            a[k]=0;

        gets(s);
        len=strlen(s);
        for(j=0;j<len;j++)
        {
            if('A'<=s[j]&& s[j]<='Z')
            {
                a[s[j]-'A']++;
            }
            else if('a'<=s[j] && s[j]<='z')
            {
                a[s[j]-'a']++;
            }
        }
        max=0;
        for(k=0;k<26;k++)
        {
            if(max<a[k])
                max=a[k];
        }
        for(k=0;k<26;k++)
        {
            if(max==a[k])
            {
                c='a'+k;
                printf("%c",c);
            }
        }
        printf("\n");

    }
    return 0;
}

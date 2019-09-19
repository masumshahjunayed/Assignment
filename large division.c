#include<stdio.h>
int main()
{
    long long int i,k,len,j,n,b;
    char s[1050];
    scanf("%lld",&n);

    for(j=1;j<=n;j++)
    {
        scanf("%s",&s);

        scanf("%lld",&b);

        len=strlen(s);
        k=0;
        for(i=0;i<len;i++)
        {
            if(s[i]!='-')
            {
            k=k*10+(s[i]-'0');
            k=k%b;
            }
        }
        if(k==0)
            printf("Case %lld: divisible\n",j);
        else
            printf("Case %lld: not divisible\n",j);
    }
    return 0;
}

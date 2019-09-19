#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int sum,i,j,len,k;
    char s[100];
    while(gets(s))
    {


        if(strcmp(s,"0")==0)
            break;

        len=strlen(s);
        sum=0;
        i=len;
        for(j=0;j<len;j++)
        {
            k=(pow(2,i)-1);

            sum+=(k*(s[j]-'0'));
            i--;
        }
        printf("%lld\n",sum);
    }

return 0;


}

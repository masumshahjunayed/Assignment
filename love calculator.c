#include<stdio.h>
#include<string.h>
int main()
{
    char s[30],q[30];
    int i,j,k,len,len2,sum1,sum2,su;
    double res,s1,s2;
    while(gets(s))
    {

        gets(q);
        sum1=0;
        sum2=0;
        len=strlen(s);
        len2=strlen(q);
        for(i=0;i<len;i++)
        {
            if('A'<=s[i] && s[i]<='Z')
            {
                sum1+=(s[i]-'A')+1;

            }
            else if('a'<=s[i] && s[i]<='z')
            {
                sum1+=(s[i]-'a')+1;

            }

        }
        for(i=0;i<len2;i++)
        {
            if('A'<=q[i] && q[i]<='Z')
            {
                sum2+=(q[i]-'A')+1;
            }
            else if('a'<=q[i] && q[i]<='z')
            {
                sum2+=(q[i]-'a')+1;
            }

        }
        while(sum1>=10){
           su=0;
        while(sum1!=0)
        {
          k=sum1%10;
          su+=k;
          sum1=sum1/10;
        }
        sum1=su;
    }

         while(sum2>=10)
        {
           su=0;
        while(sum2!=0)
        {
          k=sum2%10;
          su=su+k;
          sum2=sum2/10;
        }
        sum2=su;
        }

        s1=sum1;
           s2=sum2;
        if(s1>s2)
        {

            res=(s2/s1)*100.00;

        }
        else{
            res=(s1/s2)*100.00;

        }
        printf("%0.2lf %c\n",res,'%');

    }
    return 0;
}

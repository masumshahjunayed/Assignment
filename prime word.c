#include<stdio.h>
#include<math.h>>
#include<string.h>
int main()
{
    int i,j,k,a,l,len,sum;
    char b[25];

    while(scanf("%s",&b)==1)
    {

        len=strlen(b);
        sum=0;
        for(l=0;l<len;l++)
        {
            if(b[l]>= 'a' && b[l]<= 'z')
                sum+=(b[l]-'a')+1;

            if(b[l]>='A' && b[l]<='Z')
                sum+=(b[l]-'A')+27;


        }
        a=0;

        for(k=2;k<=sqrt(sum);k++)
        {
            if((sum%k)==0)
            {
                printf("It is not a prime word.\n");
                printf("%d",sum);
                a=1;
                break;
            }
        }
        if(a==0){
          printf("It is a prime word.\n");
          printf("%d",sum);
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int len,i,f=0;
    scanf("%s",&a);

        len=strlen(a);
    for(i=0;i<len;i++)
    {

       if (a[i]=='4' || a[i]=='7' )
       {

            f++;
       }

    }
    if(f==4 || f==7)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}

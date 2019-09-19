#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int word=0,ch=0,i,len;
    gets(str);
    for(i=0;i<=strlen(str);i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
            word++;
        else ch++;
    }
    printf("%d %d",word,ch);
}

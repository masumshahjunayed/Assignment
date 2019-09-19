#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,len,a[50],sum=0;
    char b[1001],x;
    fgets(b,1001,stdin);
    len=strlen(b);
    for(j=0;j<26;j++)
        a[j]=0;
    for(i=0;i<len;i++)
    {
        x=b[i];
        switch(x)
        {
        case 'a':
            a[0]=1;
            break;
        case 'b':
            a[1]=1;
            break;
        case 'c':
            a[2]=1;
            break;
        case 'd':
            a[3]=1;
            break;
        case 'e':
            a[4]=1;
            break;
        case 'f':
            a[5]=1;
            break;
        case 'g':
            a[6]=1;
            break;
        case 'h':
            a[7]=1;
            break;
        case 'i':
            a[8]=1;
            break;
        case 'j':
            a[9]=1;
            break;
        case 'k':
            a[10]=1;
            break;
        case 'l':
            a[11]=1;
            break;
        case 'm':
            a[12]=1;
            break;
        case 'n':
            a[13]=1;
            break;
        case 'o':
            a[14]=1;
            break;
        case 'p':
            a[15]=1;
            break;
        case 'q':
            a[16]=1;
            break;
        case 'r':
            a[17]=1;
            break;
        case 's':
            a[18]=1;
            break;
        case 't':
            a[19]=1;
            break;
        case 'u':
            a[20]=1;
            break;
        case 'w':
            a[21]=1;
            break;
        case 'x':
            a[22]=1;
            break;
        case 'y':
            a[23]=1;
            break;
        case 'z':
            a[24]=1;
            break;
        case 'v':
            a[25]=1;
            break;
        default:
            break;

        }
    }
    for(j=0;j<26;j++)
    {
        sum+=a[j];
    }
    printf("%d\n",sum);
    return 0;

}

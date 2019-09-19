#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,k,m,se,fo,f;
    char a[1000];
    while(scanf("%s",&a)==1)
    {
        m=strlen(a);
        f=0;
        k=0;
        i=0;
        j=0;
        fo=0;
        se=0;

        while(i<m)
        {
            if(a[i]!='4' && a[i]!='7')
            {
                f=1;
                break;
            }
            i++;
        }
        while(j<m)
        {
            if(a[j]=='4')
            {
                fo=1;
                break;
            }
            j++;
        }
        while(k<m)
        {
            if(a[k]=='7')
            {
                se=1;
                break;
            }
            k++;
        }
        if(f==0 && fo==1 && se==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

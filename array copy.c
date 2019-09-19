#include<stdio.h>
int main()
{
    int a,b,c,n,l=1;
    scanf("%d",&n);
    while(l<=n)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(b>a && b<c)
        {
            printf("Case %d: %d\n",l,b);
            l++;
        }
        else if( b<a && b>c)
        {
            printf("Case %d: %d\n",l,b);
            l++;
        }
        else if(a>b && a<c)
        {
            printf("Case %d: %d\n",l,a);
            l++;
        }
        else if(a<b && a>c)
        {
            printf("Case %d: %d\n",l,a);
            l++;
        }
        else if(c>b && c<a)
        {
            printf("Case %d: %d\n",l,c);
            l++;
        }
        else if(c>a && c<b)
        {
            printf("Case %d: %d\n",l,c);
            l++;
        }


    }

    return 0;

}


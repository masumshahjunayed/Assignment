#include<stdio.h>
#include<math.h>>
int main()
{
    long long int i,j,k,n,a[10000],nu,num,m,l;
    long long int marks[46342];

        for(i=0;i<=46340;i++)
        {
            marks[i]=0;
        }

        for(i=3;i<=sqrt(46340);i++)
            if(!marks[i])
        {
            for(j=i*i;j<=46340;j+=i)
            {

                marks[j]=1;
            }
        }
        j=1;
        a[0]=2;
        for(i=2;i<=46340;i++)
        {
            if(marks[i]==0 && (i%2)==1)
            {
                a[j]=i;

                j++;
            }

        }
    while(scanf("%lld",&n)==1 && n!=0)
    {
        printf("%lld =",n);
        if(n<0){

            printf(" -1 x");
            n=n*(-1);
    }
        nu=n;


         l=j;
        for(k=0;a[k]<nu && k<l;k++)
        {
            while((nu%a[k])==0 && ((nu/a[k])!=1))
            {
                nu=nu/a[k];
                printf(" %lld x",a[k]);
            }

        } printf(" %lld\n",nu);
    }
    return 0;
}

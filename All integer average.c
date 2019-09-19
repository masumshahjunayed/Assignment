#include<stdio.h>
long long int gcd(long long int d,long long int e) {
  if(e==0)
    return d;
  else
    return gcd(e,d%e);
}
int main()
{
    long long int a,b,c,n,x,k=1,i,j,ar[10001],sum,f,w,y,z,l,s,t;
    while(scanf("%lld",&n)==1)
    {
        t=0;
        w=0;
        y=0;
        f=0;
        if(n==0)
            break;
            printf("Case %lld:\n",k);
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ar[i]);
            sum+=ar[i];
        }
        if(sum<0)
        {
            f=-1;
            sum*=-1;
        }
        a=sum/n;
        b=sum%n;
        if(b!=0)
        {
            x=gcd(n,b);
            while(x>1)
            {
                n/=x;
                b/=x;
                x=gcd(n,b);

            }
            j=n;
            while(j!=0)
            {
                j=j/10;
                y++;
            }
            z=b;
            while(z!=0)
            {
                z=z/10;
                w++;
            }
            s=a;
            while(s!=0)
            {
                s=s/10;
                t++;
            }
            if(f==-1 && a!=0){
                    for(l=0;l<y-w+t+2;l++)
                    printf(" ");
                printf("%lld\n",b);
                printf("-%lld",a);
            }
            else if(f==0 && a!=0) {
                for(l=0;l<y-w+t;l++)
                    printf(" ");
                printf("%lld\n",b);
                printf("%lld",a);
            }
            else if(a==0 && f==0)
            {
                for(l=0;l<y-w;l++)
                    printf(" ");
                printf("%lld\n",b);

            }
            else if(a==0 && f==-1)
            {
                for(l=0;l<y-w+2;l++)
                    printf(" ");
                printf("-%lld\n",b);
            }


            for(l=0;l<y;l++)
                    printf("-");
            if(f==-1 && a!=0){
                printf("\n");
             for(l=0;l<t;l++)
                    printf(" ");
            printf("%lld\n",n);
            }
            else if(f==0 && a!=0){
                printf("\n");
                    for(l=0;l<t;l++)
                    printf(" ");
                printf("\n %lld\n",n);
            }
            else if(a==0 && f==0)
                printf("\n%lld\n",n);
            else if(a==0 && f==-1)
                printf("\n  %lld\n",n);
        }
        if(f==-1 && b==0)
            printf("- %lld\n",a);
        else if(f==0 && b==0)
            printf("%lld\n",a);
            k++;
    }
    return 0;
}

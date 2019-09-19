#include<stdio.h>
int gcd(int a,int b)
{
    int d;
    if(a<b)
    {
        d=b;
        b=a;
        a=d;
    }
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()

{
   int a,b,c,i,count=1,k,l,f;
   scanf("%d%d%d",&a,&b,&c);
   while(c>=0)
   {
       if(count%2==1)
       {
           k=gcd(a,c);
           if(k<=c)
           {
               c=c-k;
           }
           else if(k>c)
           {
               f=1;
               break;
           }
       }
       if(count%2==0)
       {
           l=gcd(b,c);
           if(l<=c)
           {
               c=c-l;
           }
           else if(l>c)
           {
               f=0;
               break;
           }
       }
       count++;
   }
   if(f==1)
   {
       printf("1\n");
   }
   else if(f==0)
   {
       printf("0\n");
   }
    return 0;
}

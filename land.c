#include<stdio.h>
int main()
{
     int a[100];
     int i,j,x,z,v=1,k,s,sum,n,p,q=1,c;

scanf("%d",&n);

while(v<=n)
{
sum=0;

     for(p=0;p<40;p++)
     {
         scanf("%d",&a[p]);
         if(a[p]==0){
         break;
         }
     }

     for(i=1;i<p;i++)
     {

         for(j=0;j<p;j++)
         {
             if(a[j]>a[i])

               {

                 x=a[j];
                 a[j]=a[i];
                 a[i]=x;

            }
         }
     }


     for(k=j-1;k>=0;k--)
     {

        z=pow(a[k],q);
        s=(2*z);
        sum=sum+s;
        q++;


     }
     printf("%d\n",sum);

v++;
}


return 0;
}

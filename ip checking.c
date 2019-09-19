#include<stdio.h>
#include<math.h>
int main()
{
    char a[10050],b[10050];
    long long i,len,j,len2,ip1,ip2,ip,z,ip3,k,n;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
    scanf("%s",&a);
    scanf("%s",&b);
    len=strlen(a);
    len2=strlen(b);
    ip3=0;
    ip=0;
    for(i=0;i<len;i++)
    {
        ip1=0;
        while(a[i]!='.' && i<len)
        {
          ip1=(ip1*10)+(a[i]-'0');
          i++;
        }
            ip3=ip1+ip3;
    }
   for(i=0;i<len2;i++)
    {
        ip2=0;
        j=7;
        while(b[i]!='.' && i<len2)
        {
          z=pow(2,j);
          ip2=ip2+(z*(b[i]-'0'));
          j--;
          i++;
        }
        ip=ip+ip2;
    }
    if(ip==ip3)
        printf("Case %lld: Yes\n",k);
    else
        printf("Case %lld: No\n",k);
}
return 0;
}

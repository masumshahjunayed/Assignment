#include<stdio.h>
int main()
{
    int n,k,i,a,x,count,res;
    scanf("%d%d",&n,&k);
    a=5-k;
    count =0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x<=a)
        {
            count+=1;
        }
    }
    res=count/3;
    printf("%d",res);
    return 0;
}

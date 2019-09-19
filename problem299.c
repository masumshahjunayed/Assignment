#include<stdio.h>
int main()
{
int temp, n,a[100],p=0,i,j,k,count=0,cas;
scanf("%d",&cas);
while(p<cas){
        scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%d",&a[j]);
    }
    for(i=0;i<n;i++)
        {
        for(k=0;k<n-1;k++){
        if(a[k]>a[k+1])
        {
    temp=a[k];
    a[k]=a[k+1];
    a[k+1]=temp;
    count++;
}
}
}

printf("Optimal train swapping takes %d swaps.\n",count);
count=0;
p++;

}

return 0;
}

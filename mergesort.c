#include<stdio.h>
void marge(int a[],int p,int q,int r)
{
    int i,j,k ,n1,n2;
    n1=q-p+1;
    n2=r-q;
    int L[n1],R[n2];
    for(i=1;i<=n1;i++)
    {
        L[i]=a[p+i-1];
    }
    for(j=1;j<=n2;j++)
    {
        R[j]=a[q+j-1];
        j++;
    }
    i=1,j=1;k=1;
    while (i<=n1 && j<=n2)
    {
        if(L[i]<R[j])
        {
            a[p+k-1]=L[i];
            i++;
        }
        else
        {
            a[p+k-1]=R[j];
            j++;
        }
        k++;

    }
     while(i<=n1)
    {
        a[p+k-1]=L[i];
        k++;
        i++;
    }
    while(j<=n2)
    {
        a[p+k-1]=R[j];
        k++;
        j++;
    }
}
int main(){
    int z;
int a[6]={3,6,7,1,5,8};
marge(a,1,3,6);
for(z=0;z<6;z++)
{
    printf("%d\n",a[z]);
}
return 0;
}

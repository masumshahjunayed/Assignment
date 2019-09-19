#include<stdio.h>
char largest(int r,int s)
{
    if(r>s)
        return 'k';
    else
        return 'M';
}
void main()
{
    int k=3,m=7;
    printf("k=%d m=%d",k,m);
    printf("\n largest is=%c\n",largest(k,m));

}

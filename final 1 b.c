#include<stdio.h>
void main()
{
    int i=4,j=2;
    fun(&i,j);
    printf("i=%d j=%d",i,j);

}
void fun(int *i,int j)
{
    *i=(*i)*j;
    j=j*j;
}

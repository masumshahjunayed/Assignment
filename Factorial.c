#include<stdio.h>

int factorial(int n)
{
    //printf("Dhokse \n");
    int t;
    if(n==1)
    {
        return 1;
    }
    else
        t=n*factorial(n-1);
      printf("The %dth vodkas size is: %d\n",n,t);
      return t;
}
int main()
{
    int n;
    printf("Enter an positive integer: ");
    scanf("%d",&n);
    printf("Factorial is %d",factorial(n));
    return 0;
}


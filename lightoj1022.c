#include<stdio.h>

int main()
{
    double j, r, i, k;
    int n , t=1;
    scanf("%d",&n);

    while(t<=n)
    {
        scanf("%lf",&r);
        j=(2*r)*(2*r);
        k=(3.141592653589793)*(r*r);
        i=j-k;

        printf("Case %d: %.2lf\n",t,i);
        t++;
    }
    return 0;
}

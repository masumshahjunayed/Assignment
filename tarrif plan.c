#include<stdio.h>
int main()
{

    int i,j,k,n,a,jl,tkk,tk,tt,t,mil,m;
    scanf("%d",&m);
    for(k=1;k<=m;k++)
    {
        jl=0;
        mil=0;

        scanf("%d",&n);
    for(i=0;i<n;i++)
    {

       scanf("%d",&a);

           t=(a/30)+1;
           tk=10*t;


           tt=(a/60)+1;
           tkk=15*tt;
           jl=jl+tkk;
            mil=mil+tk;
       }


    if(mil<jl)
        printf("Case %d: Mile %d\n",k,mil);
    else if(mil==jl)
        printf("Case %d: Mile Juice %d\n",k,mil);
    else
        printf("Case %d: Juice %d\n",k,jl);


    }
    return 0;

}

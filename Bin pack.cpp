#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g1,g2,g3,b3,c3,b1,b2,c1,c2,n,i,a[6],mn,x;
    while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
    {
        a[0]=b2+b3+c1+c3+g1+g2;
        a[1]=b2+b3+g1+g3+c1+c2;
        a[2]=c2+c3+b1+b3+g1+g2;
        a[3]=c2+c3+g1+g3+b1+b2;
        a[4]=g2+g3+b1+b3+c1+c2;
        a[5]=g2+g3+c1+c3+b1+b2;
        mn=a[0];
        x=0;
        for(i=0;i<6;i++)
        {
            if(mn>a[i])
            {
                x=i;
                mn=a[i];

            }
        }
        if(x==0)
            printf("BCG %d\n",mn);
        else if(x==1)
            printf("BGC %d\n",mn);
        else if(x==2)
            printf("CBG %d\n",mn);
        else if(x==3)
            printf("CGB %d\n",mn);
        else if(x==4)
            printf("GBC %d\n",mn);
        else if(x==5)
            printf("GCB %d\n",mn);
    }
    return 0;
}

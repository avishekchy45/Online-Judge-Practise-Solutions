#include<stdio.h>
int main()
{
    int T,i,a,b,n,sum;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        sum=0;
        if (a % 2 == 0)
            a += 1;
        for(n=a; n<=b; n=n+2)
            sum+=n;
        printf("Case %d: %d\n",i,sum);
    }
}

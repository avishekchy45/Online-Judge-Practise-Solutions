#include<stdio.h>
int main()
{
    int t,i,X,Y;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&X);
        scanf("%d",&Y);
        printf("%d\n",X*Y);
    }
}

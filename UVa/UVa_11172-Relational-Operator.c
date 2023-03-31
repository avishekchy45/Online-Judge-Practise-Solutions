#include<stdio.h>
int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
            if (a>b)
            printf(">\n");
        if (a<b)
            printf("<\n");
        if (a==b)
            printf("=\n");
    }

    return 0;
}

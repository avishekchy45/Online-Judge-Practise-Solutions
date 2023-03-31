#include<stdio.h>
main ()
{
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++)
    {
        int h,j,k;
        scanf("%d", &h);
        printf("Case %d:\n", i);
        for(j = 1; j <= h; j++)
        {
            for(k = 1; k<= j; k++)
            {
                printf("%d", k);
            }
            printf("\n");
        }
    }
    return 0;
}

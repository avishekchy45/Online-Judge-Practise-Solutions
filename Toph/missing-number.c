#include<stdio.h>
main()
{
    int sum;
    scanf("%d",&sum);
    int N;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&N);
        sum-=N;
    }
    printf("%d",sum);
}

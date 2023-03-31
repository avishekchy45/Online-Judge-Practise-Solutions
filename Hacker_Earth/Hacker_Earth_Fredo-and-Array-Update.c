#include<stdio.h>
 main()
{
    int N,A[100000],sum=0,j;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    for(j=1;j<sum;j++)
    {
        if(N*j>sum)
            break;
    }
    printf("%d",j);

}


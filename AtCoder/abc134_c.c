#include<stdio.h>

main()
{
    long long int N,A[200000],i,max=0,max2=0;
    scanf("%lld",&N);

    for(i=0; i<N; i++)
    {
        scanf("%lld",&A[i]);
        if(A[i]>max)
            max=A[i];
        else if(A[i]>max2)
            max2=A[i];
    }

    for(i=0; i<N; i++)
    {
        if(A[i]==max)
        {
            printf("%d\n",max2);
            continue;
        }
        printf("%d\n",max);
    }
    return 0;
}


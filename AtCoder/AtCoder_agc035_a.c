#include<stdio.h>

main()
{
    long long int N,A[200000],i,hat=0;
    scanf("%lld",&N);

    for(i=0; i<N; i++)
    {
        scanf("%lld",&A[i]);
        hat^=A[i];
    }
    if(hat==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}

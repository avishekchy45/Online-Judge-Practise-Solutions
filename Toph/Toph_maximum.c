#include<stdio.h>
main()
{
    int N,max=1,M;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&M);
        if(M>max)
            max=M;
    }
    printf("%d",max);
}

#include<stdio.h>
main()
{
    int N,M,L,sum=0;
    scanf("%d %d",&N,&M);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&L);
        if(L>=M)
            sum+=M;
        //else
          //  sum+=L;
    }
    if(sum==60)
        printf("YES");
    else
        printf("NO");
}

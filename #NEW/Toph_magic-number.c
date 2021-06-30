#include<stdio.h>
#include<math.h>
IsMagic();
main()
{
    int T,N;
    //double N;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        scanf("%d",&N);
        int n=(int)sqrt(N);
        if(n*n==N)
            if(IsMagic(n))
                printf("YES.\n");
            else
                printf("NO.\n");
        else
            printf("NO.\n");
    }
}
IsMagic(int n)
{
    int i;
    if(n>1)
        for(i=2; i<=n/2; i++)
            if(n%i==0)
                return 0;
    return 1;
}

#include<stdio.h>
IsPrime(int n);
main()
{
    int n;
    scanf("%d",&n);
    if(IsPrime(n))
        printf("Yes\n");
    else
        printf("No\n");
}
IsPrime(int n)
{
    int i;
    if(n>2)
        for(i=2; i<=n/2; i++)
            if(n%i==0)
                return 0;
    return 1;
}

